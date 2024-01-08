#include <iostream>
#include "shapes.h"

double areaTriangle(double base, double height) {
    return 0.5 * base + height;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <base> <height>\n";
        return 1;
    }

    double base = std::atof(argv[1]);
    double height = std::atof(argv[2]);
    std::cout << "Area of the triangle: " << areaTriangle(base, height) << std::endl;
    return 0;
}
