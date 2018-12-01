#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = 12345.56;
    double vsepAtCpaFt = NAN;
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
