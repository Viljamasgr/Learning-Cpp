#include <iostream>

int searchArray(std::string array[], int size, std::string element);

int main() {

    std::string foods[] = {"pizza", "burger", "salad", "sushi", "tacos"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    std::string myFood;

    std::cout << "Enter elemnt to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1) {
        std::cout << myFood << " found at index: " << index << '\n';
    }
    else{
        std::cout << myFood << " not found in the array." << '\n';
    }

    return 0;
}

int searchArray(std::string array[], int size, std::string element) {
    
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}