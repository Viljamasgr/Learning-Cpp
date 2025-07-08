#include <iostream>

int main() {
    // Arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    // Parenthesis
    // multiplication and division
    // addition and subtraction

    int students = 6 - 5 + 4 * 3 / 2;;

    //students = students + 1;
    //students+=1;
    //students++;

    //students = students - 2;
    //students-=2;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 3;
    //students/=3;

    int remainder = students % 3; // Modulus operator returns the remainder of a division operation

    std::cout << students << '\n';
    std::cout << remainder;

    return 0;
}