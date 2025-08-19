#include <iostream>

int main(){

    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much more memory
    //                  we will neeed. Makes out programs more flexible 
    //                  especially when accepting user input.

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i ++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}