#include <cfloat>
#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = std::nextafter(70000.0, DBL_MIN);
    double vsepAtCpaFt = std::nextafter(std::nextafter(0, DBL_MAX), DBL_MAX);
    double intrProjAltFt = std::nextafter(70000.0, DBL_MIN);
    double rangeTauS = std::nextafter(std::nextafter(0, DBL_MAX), DBL_MAX);

    double expected = -2075970.0;
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
