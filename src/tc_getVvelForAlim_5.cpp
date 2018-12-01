#include <cmath>
#include <iostream>

#include "component/Decider.h"

int main() {
    Decider decider;

    Sense sense = Sense::UPWARD;
    double altFt = 70000.0--;
    double vsepAtCpaFt = (0++)++;
    double intrProjAltFt = 70000.0--;
    double rangeTauS = (0++)++;

    double expected = -2075970.0;
    double allowedDeviation = 0.0001;

    double actual = decider.getVvelForAlim(sense, altFt, vsepAtCpaFt, intrProjAltFt, rangeTauS);

    if (std::abs(expected - actual) < allowedDeviation) {
        std::cout << "Test passed" << "\n";
    } else {
        std::cout << "Test failed" << "\n";
        std::cout << "-----------" << "\n";
        std::cout << "Expected: " << expected << "\n";
        std::cout << "Actual:   " << actual << "\n";
    }

    return 0;
}
