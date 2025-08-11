#include <iostream>

int main() {

    //.length() method
    // This method returns the length of the string.

    // .empty() method
    // This method checks if the string is empty.

    // .clear() method
    // This method clears the contents of the string.

    // .append() method
    // This method appends a string to the end of another string.

    // .at() method
    // This method returns a character at a specified index in the string.

    // .insert() method
    // This method inserts a string at a specified index in the string.

    // .find() method
    // This method finds the first occurrence of a substring in the string.

    // .erase() method
    // This method erases a specified number of characters from the string starting at a specified index.

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    name.append("@gmail.com");
    std::cout << "Your email is: " << name << std::endl;

    std::cout << name.at(1) << std::endl;;

    name.insert(0, "Hello, ");
    std::cout << name << std::endl;

    return 0;
}