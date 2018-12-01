#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = std::nextafter(std::nextafter(70000.0, DBL_MAX), DBL_MAX);
    double vsepAtCpaFt = 4232.42;
    double intrProjAltFt = 35009.27;
    double rangeTauS = 42222.22;

    try {
        double actual = decider.getVvelForAlim(sense, altFt, vsepAtCpaFt, intrProjAltFt, rangeTauS);

        std::cout << "Test failed" << "\n";
        std::cout << "-----------" << "\n";
        std::cout << "Expected: " << "FAIL" << "\n";
        std::cout << "Actual:   " << actual << "\n";
    } catch (...) {
        std::cout << "Test passed" << "\n";
    }

    return 0;
}