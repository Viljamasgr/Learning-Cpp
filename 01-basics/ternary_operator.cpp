#include <iostream>

int main() {

    // ternary operator ?: = replacemnt to an if/else statement
    // condition ? expression1 : expression2;

    // examples

    // int grade = 50;
    // grade>= 60 ? std::cout <<"You passed!" : std::cout << "You failed!";

    // int number = 9;
    // number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = false;

    hungry ? std::cout << "You are hungry!" : std::cout << "You are not hungry!";

    return 0;
}