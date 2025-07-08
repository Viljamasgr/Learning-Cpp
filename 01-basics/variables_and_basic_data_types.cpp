#include <iostream>

int main() {

    // Integer (whole number)
    int age = 25;
    int year = 2025;
    int days = 365;

    // Double (number inluding decimal)
    double price = 10.99;
    double gpa = 2.4;
    double temperature = 25.1;

    // Single character
    char grade = 'A';
    char initial = 'J';
    char dollarSign = '$';

    // Boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;
    
    // String (objects that represent a sequence of text)
    std::string name = "John";
    std::string day = "Monday";
    std::string food = "pizza";
    std::string address = "123 Main St";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old.\n";

    return 0;
}