#include <iostream>
#include <cmath>
#include <limits>
#include <conio.h>

int main() {
    std::cout << "cbrt(729) = " << std::cbrt(729) << '\n' << "cbrt(-0.125) = " << std::cbrt(-0.125) << '\n';
    std::cout << "cbrt(-0) = " << std::cbrt(-0.0) << '\n' << "cbrt(+inf) = " << std::cbrt(INFINITY) << '\n';
    
    std::cout.precision(std::numeric_limits<double>::max_digits10);
    std::cout << "cbrt(343)      = " << std::cbrt(343) << '\n';
    std::cout << "pow(343,1.0/3) = " << std::pow(343, 1.0 / 3) << '\n';

    _getch();
    return 0;
}