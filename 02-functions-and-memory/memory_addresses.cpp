#include <iostream>

int main() {

    // meemory address = a location in memory wheree data is stroed
    // a memory address can be accessed with & (address-of operator)

    std::string name = "John";
    int age = 21;
    bool student = true;
    
    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}