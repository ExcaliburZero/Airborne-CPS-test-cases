#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UNKNOWN;
    double altFt = -2010.56;
    double vsepAtCpaFt = -522.52;
    double intrProjAltFt = -2200.56;
    double rangeTauS = -2.52;

    double expected = 0;
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
