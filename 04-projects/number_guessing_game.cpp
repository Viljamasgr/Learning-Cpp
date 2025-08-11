#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    // Number guessing game

    int num;
    int guess;
    int tries = 0;

    // Generating random number for user to guess.
    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "**** NUMBER GUESSING GAME ****\n";

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess < num) {
            std::cout << "Too low! Try again.\n";
        } else if(guess > num) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }
    }while(guess != num);

    std::cout << "******************************";

    return 0;
}