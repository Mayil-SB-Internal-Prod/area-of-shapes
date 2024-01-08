#include <iostream>
#include "shapes.h"

double areaSquare(double side) {
    return side * side;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <side>\n";
        return 1;
    }

    double side = std::atof(argv[1]);
    std::cout << "Area of the square: " << areaSquare(side) << std::endl;
    return 0;
}
