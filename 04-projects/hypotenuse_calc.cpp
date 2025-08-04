#include <iostream>
#include <cmath>

int main(){

    // Hypotenuse calculation

    double a, b, c;

    // Getting user input
    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    // Calculating 
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C: " << c;

    return 0;
}