#include <iostream>

int main() {

    // Defining an array to hold food items
    std::string foods[10];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    // Filling the array with user input
    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q") {
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following foods:\n";


    // Printing filled array
    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << '\n';
    }

    return 0;
}