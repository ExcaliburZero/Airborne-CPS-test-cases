TEST_CASES = \
	tc_getVvelForAlim_1.o \
	tc_getVvelForAlim_2.o \
	tc_getVvelForAlim_3.o \
	tc_getVvelForAlim_4.o \
	tc_getVvelForAlim_5.o \
	tc_getVvelForAlim_6.o \
	tc_getVvelForAlim_7.o \
	tc_getVvelForAlim_8.o \
	tc_getVvelForAlim_9.o \
	tc_getVvelForAlim_10.o \
	\
	tc_getVvelForAlim_b.o \
	tc_getVvelForAlim_c.o \
	tc_getVvelForAlim_d.o \
	tc_getVvelForAlim_e.o \
	tc_getVvelForAlim_f.o \
	tc_getVvelForAlim_g.o \
	tc_getVvelForAlim_h.o \
	tc_getVvelForAlim_k.o \
	tc_getVvelForAlim_l.o \
	tc_getVvelForAlim_m.o \
	tc_getVvelForAlim_n.o \
	tc_getVvelForAlim_o.o \
	tc_getVvelForAlim_p.o \
	tc_getVvelForAlim_q.o \
	tc_getVvelForAlim_t.o \
	tc_getVvelForAlim_u.o \
	tc_getVvelForAlim_w.o \
	tc_getVvelForAlim_z.o \
	tc_getVvelForAlim_aa.o \
	tc_getVvelForAlim_ac.o \

	# tc_getVvelForAlim_a does not compile (type error)
	# tc_getVvelForAlim_i does not compile (type error)
	# tc_getVvelForAlim_j does not compile (type error)
	# tc_getVvelForAlim_r does not compile (type error)
	# tc_getVvelForAlim_s does not compile (type error)
	# tc_getVvelForAlim_v is not possible to implement (DBL_MIN--)
	# tc_getVvelForAlim_x is not possible to implement (DBL_MAX++)
	# tc_getVvelForAlim_y is not possible to implement (DBL_MIN--)
	# tc_getVvelForAlim_ab is not possible to implement (DBL_MIN--)
	# tc_getVvelForAlim_ad is not possible to implement (DBL_MAX++)
	# tc_getVvelForAlim_ae is not possible to implement (DBL_MIN--)

.PHONY: tests
tests: $(TEST_CASES)

%.o: %.cpp
	echo $<
	g++ -std=c++11 $< units/Velocity.cpp component/Decider.cpp units/Distance.cpp
	./a.out
	echo "\n"
