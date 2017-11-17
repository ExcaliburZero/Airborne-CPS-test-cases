﻿#include "component\Decider.h"
#include "Vector2.h"
#include "Calculations.h"
#include <map>

class NASADecider : public Decider {
public:
	NASADecider(Aircraft* thisAircraft, concurrency::concurrent_unordered_map<std::string, ResolutionConnection*>*);
	virtual ~NASADecider();

	void analyze(Aircraft* intruder);

private:
	static Velocity const kMinGaugeVerticalVelocity_;
	static Velocity const kMaxGaugeVerticalVelocity_;

	static Distance const kProtectionVolumeRadius_;

	static Distance const kAlim350_;
	static Distance const kAlim400_;
	static Distance const kAlim600_;
	static Distance const kAlim700_;

	static Distance const kAltitudeAlim350Threshold_;
	static Distance const kAltitudeAlim400Threshold_;
	static Distance const kAltitudeAlim600Threshold_;

	int sensitivityLevel_ = 2;
	bool raMod_ = false;
	Sense tempSense_ = Sense::UNKNOWN;
	std::map<Aircraft, Calculations> calculations_;

	concurrency::concurrent_unordered_map<std::string, ResolutionConnection*>* activeConnections_;
	Aircraft* thisAircraft_;
	double thisAircraftAltitude_;

	/* 
	Determines the appropriate threat classification
	*/
	Aircraft::ThreatClassification determineThreatClass(Aircraft* intrCopy, ResolutionConnection* conn);

	void setSensitivityLevel(double alt);

	int tau();
	int alim();
	double dmod();
	double hmd();
	double zthr();

	Vector2 getHorPos(LLA position);
	Vector2 getHorVel(LLA position, LLA positionOld, double deltaTime);
	Vector2 getRelativePos(LLA userPos, LLA intrPos);
	Vector2 getRelativeVel(Vector2 relativePos, Vector2 relativePosOld, double deltaTime);

	/*
	"Given a relative position s and velocity v, the time of horizontal closest point of approach, denoted tcpa, is
	the time t that satisfies closureRate(t) = 0." - tcpa (Formula 8)
	*/
	double tCpa(Vector2 s, Vector2 v);

	/*
	"Given a relative position s and velocity v, Formula (1) and Formula (2) can be written in a vector form
	as follows...In the vector form of these formulas, i.e., Formula (9) and Formula (10), the singularity is
	equivalently expressed as s · v = 0. The dot product s · v also characterizes whether the aircraft are
	horizontally diverging, i.e., s · v > 0, or horizontally converging, i.e., s · v < 0. It can be seen from
	Formula (9) that when the aircraft are converging, t is positive." - t (Formula 9)
	*/
	double t(Vector2 s, Vector2 v);

	/*
	"Used in a context where the aircraft are horizontally converging. In that case, modified tau,
	i.e., τmod, is positive when the current range is greater than DMOD." - tmod (Formula 10)
	*/
	double tMod(Vector2 s, Vector2 v);

	/*
	"The function Horizontal_RA(subscript Current ownership's sensitivity level) takes as
	parameters the relative horizontal position s and velocity v of the aircraft. It returns
	true if, for the given input and sensitivity level the horizontal thresholds are
	satisfied." - Horizontal_RA (Formula 11)
	*/
	bool horizontalRA(Vector2 s, Vector2 v);

	/*
	"In order to model the vertical check performed by the TCAS II RA logic, it is necessary to define the
	time to co-altitude tcoa. This time satisfies sz +tcoavz = 0, where sz ≡ soz −siz and vz ≡ voz −viz. Therefore,
	for a given relative altitude sz and relative non-zero vertical speed vz:" - tcoa (Formula 12)
	*/
	double tCoa(double sz, double vz);

	/*
	"The function Vertical RA, which returns true when the vertical thresholds are satisfied for a sensitivity level,
	is defined as follows." - Vertical_RA (Formula 13)
	*/
	bool verticalRA(double sz, double vz);

	/*
	- delta (Formula 15)
	*/
	double delta(Vector2 s, Vector2 v, double d);

	/*
	"CD2D is a function that takes as parameters the relative state of the aircraft, i.e., relative position s and
	relative velocity v, and a minimum separation distance D. It returns a Boolean value that indicates whether
	the aircraft will be within horizontal distance D of one another at any time in the future along trajectories
	which are linear projections of their current states." - CD2D (Formula 14)
	*/
	bool cd2d(Vector2 s, Vector2 v, double d);

	/*
	"The function that determines whether or not an RA will be issued for the ownship can be defined as follows."
	- TCASII_RA (Formula 16)
	*/
	bool tcasIIRa(Vector2 so, double soz, Vector2 vo, double voz, Vector2 si, double siz, Vector2 vi, double viz);

	/*
	"The function that checks if an RA will be issued for the ownship at a given future time
	t < tcpa(s, v) can be defined as follows." - TCASII_RA_at (Formula 17)
	*/
	bool tcasIIRaAt(Vector2 so, double soz, Vector2 vo, double voz, Vector2 si, double siz, Vector2 vi, double viz, double t);

	/*
	"This function computes exactly the time t in [B, T] at which tmod(s + tv, v) attains its minimum value."
	- Time_Min_TAUmod (Formula 18)
	*/
	double timeMinTauMod(Vector2 s, Vector2 v, double b, double t);

	/*
	"For a given sensitivity level, the function RA2D characterizes the set of possible relative states
	that lead to a horizontal RA within a lookahead time interval." - RA2D (Formula 21)
	*/
	bool ra2d(Vector2 horizontalRelativePos, Vector2 horizontalRelativeVel, double lookaheadTimeStart, double lookaheadTimeEnd);

	/*
	"A function can be defined that analytically computes the specific time interval, before a
	specified lookahead time T, where all vertical RAs will occur. This function is defined as follows."
	- RATimeInterval (Formula 22)
	*/
	double* raTimeInterval(double sz, double vz, double lookaheadTime);

	/*
	"The function RA3D detects RAs by checking the time interval that is returned by RATimeInterval for
	horizontal RAs using the algorithm RA2D" - RA3D (Formula 23)
	*/
	bool ra3d(Vector2 userHorizontalPos, double userAlt, Vector2 userHorizontalVel, double userVSpeed, Vector2 intrHorizontalPos, double intrAlt, Vector2 intrHorizontalVel,
		double intrVSpeed, double lookaheadTime);

	/*
	"The function sep_at, defined by Formula (24), predicts the vertical separation between the aircraft at a
	given time t assuming a target vertical speed v for the ownship. The ownship is assumed to fly at constant
	ground speed and constant vertical acceleration a. Once the target vertical speed v is reached the ownship
	continues to fly at constant vertical speed." - sep_at (Formula 24)
	*/
	double sepAt(double userAlt, double userVSpeed, double intrAlt, double intrVSpeed, double targetVSpeed, double userVAccel, int dir, double deltaTime);

	/*
	"The function own alt at, defined by Formula (25), computes the
	vertical altitude of the ownship at time t given a target vertical speed v and acceleration a. The parameter 
	dir specifies a possible direction for the vertical ownship maneuver, which is upward when = 1 and downward
	when = −1. The intruder is assumed to continue its trajectory at its current vertical speed."
	- own_alt_at (Formula 25)
	*/
	double ownAltAt(double userAlt, double userVSpeed, double targetVSpeed, double userVAccel, int dir, double deltaTime);

	/*
	"The function stop accel computes the time at which the ownship reaches the target vertical speed v."
	- stop_accel (Formula 26)
	*/
	double stopAccel(double userVSpeed, double targetVSpeed, double userVAccel, int direction, double deltaTime);

	/*
	"The sense of an RA is computed based on the direction for the ownship maneuver that provides a greater
	vertical separation, with a bias towards the non-crossing direction. The function RA sense computes such a
	direction, where ALIM is the altitude limit for a given sensitivity level." - RA_sense (Formula 27)
	*/
	int raSense(double userAlt, double userVSpeed, double intrAlt, double intrVSpeed, double targetVSpeed, double userVAccel, double deltaTime);

	/*
	"An RA is corrective if the altitude limit is not cleared when the ownship maneuvers in the direction of the RA
	sense. The Boolean function corrective specifies an algorithm that returns true when a given RA is corrective."
	- corrective (Formula 28)
	*/
	bool corrective(Vector2 userHorizontalPos, double userAlt, Vector2 userHorizontalVel, double userVSpeed, Vector2 intrHorizontalPos, double intrAlt, Vector2 intrHorizontalVel, double intrVSpeed, double targetVSpeed, double userVAccel);
};