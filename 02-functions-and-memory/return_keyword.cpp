#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main() {

    // return = return a value back to the spot
    //          where you called the encompassing function

    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}