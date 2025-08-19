#include <iostream>

int main() {

    std::string students[] = {"SpongeBob", "Patrick", "Sandy", "Squidward"};

    // Iterate over the array using a for loop
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    return 0;
}