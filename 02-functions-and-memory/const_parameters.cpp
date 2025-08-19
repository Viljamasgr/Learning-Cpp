#include <iostream>

void printInfo(std::string name, int age);

int main() {

    // const-parameter = parameter that is effectively read-only
    //                   code it more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "John";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(std::string name, int age){
    name = " ";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}