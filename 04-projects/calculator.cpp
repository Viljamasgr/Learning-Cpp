#include <iostream>

int main() {

    // Calculator program

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**** Calculator ****" << std::endl;

    std::cout << "Enter either(+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "result: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero is not allowed." << '\n';
            }
            break;
        default:
            std::cout << "Error: Invalid operator." << '\n';
            break;
    }

    std::cout << "********************";
}