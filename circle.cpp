#include <iostream>
#include <cmath>
#include "shapes.h"

// Implementation of circle area calculation
double areaCircle(double radius) {
    return M_PI * radius * radius;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <radius>\n";
        return 1;
    }

    double* radius = new double;
    *radius = std::atof(argv[1]);

    std::cout << "Area of the circle: " << areaCircle(*radius) << std::endl;

    return 0;
}
