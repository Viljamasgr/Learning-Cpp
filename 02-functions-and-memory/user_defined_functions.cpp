#include <iostream>

void happyBirthday(std::string name, int age);

int main() {

    // function = a block of resuable code.

    std::string name = "John";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Brithday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " yers old!\n";
}