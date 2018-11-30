# Airborne-CPS Test Cases
These are test cases for the Decider class of the Airborne-CPS project.

https://github.com/tenbergen/Airborne-CPS

## Running tests
```
$ cd src
$ make --quiet
```

## Creating new tests
1) To create a new test case, copy an existing one to make the new test case (using the correct test id).

```
$ cd src
$ cp tc_getVvelForAlim_1.cpp tc_getVvelForAlim_ID.cpp
```

2) Change the inputs and expected output

3) Add the test case to the top of the `Makefile`
