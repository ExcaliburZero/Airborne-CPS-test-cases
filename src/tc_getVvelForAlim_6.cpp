#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = std::nextafter(0.0, DBL_MAX);
    double vsepAtCpaFt = DBL_MAX;
    double intrProjAltFt = std::nextafter(0.0, DBL_MAX);
    double rangeTauS = DBL_MAX;

    double expected = -60.0;
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
