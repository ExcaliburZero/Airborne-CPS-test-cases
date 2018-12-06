#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::DOWNWARD;
    double altFt = 2000.0;
    double vsepAtCpaFt = 1.0;
    double intrProjAltFt = 2.2;
    double rangeTauS = 60.0;

    double expected = -599;
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
