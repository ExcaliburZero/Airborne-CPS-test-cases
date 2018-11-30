TEST_CASES = \
	tc_getVvelForAlim_1.o \
	tc_getVvelForAlim_2.o

.PHONY: tests
tests: $(TEST_CASES)

%.o: %.cpp
	echo $<
	g++ -std=c++11 $< units/Velocity.cpp component/Decider.cpp units/Distance.cpp
	./a.out
	echo "\n"
