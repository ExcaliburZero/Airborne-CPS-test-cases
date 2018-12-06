#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = std::nextafter(DBL_MIN, DBL_MAX);
    double vsepAtCpaFt = DBL_MIN;
    double intrProjAltFt = std::nextafter(DBL_MIN, DBL_MAX);
    double rangeTauS = DBL_MIN;

    double expected = -1.1515057758895685 * pow(10, 109);
    double allowedDeviation = 0.0001;

    double actual = decider.getVvelForAlim(sense, altFt, vsepAtCpaFt, intrProjAltFt, rangeTauS);

    if (std::abs(expected - actual) < allowedDeviation) {
        std::cout << "Test passed" << "\n";
        std::cout << "+++++++++++" << "\n";
        std::cout << "Actual:   "  << actual << "\n";
    } else {
        std::cout << "Test failed" << "\n";
        std::cout << "-----------" << "\n";
        std::cout << "Expected: " << expected << "\n";
        std::cout << "Actual:   " << actual << "\n";
    }

    return 0;
}
