#include <iostream>

int main() {

    double temp;
    char unit;

    std::cout << "**** Temperature Conversion ****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;
    
    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Clesius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature is: " << temp << " F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the tempeature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is: " << temp << " C\n";
    }
    else {
        std::cout << "Invalid unit! Please enter 'F' or 'C'.\n";
        return 1;
    }

    std::cout << "********************************";

    return 0;
}