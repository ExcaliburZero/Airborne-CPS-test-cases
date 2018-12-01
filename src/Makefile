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
	\
	tc_getVvelForAlim_b.o \
	tc_getVvelForAlim_c.o \
	tc_getVvelForAlim_d.o \
	tc_getVvelForAlim_e.o

	# tc_getVvelForAlim_a does not compile

.PHONY: tests
tests: $(TEST_CASES)

%.o: %.cpp
	echo $<
	g++ -std=c++11 $< units/Velocity.cpp component/Decider.cpp units/Distance.cpp
	./a.out
	echo "\n"
