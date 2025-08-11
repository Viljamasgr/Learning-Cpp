#include <iostream>
#include <ctime>
#include <cctype>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    srand(time(0));

    char player = getUserChoice();
    std::cout << "You chose: ";
    showChoice(player);

    char computer = getComputerChoice();
    std::cout << "Computer chose: ";
    showChoice(computer);

    chooseWinner(player, computer);
    return 0;
}

char getUserChoice() {
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do {
        std::cout << "'r' for Rock, 'p' for Paper, 's' for Scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> player;
        player = std::tolower(player);
    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice() {
    char choices[] = {'r', 'p', 's'};
    return choices[rand() % 3];
}
void showChoice(char choice) {
    switch (choice) {
        case 'r': std::cout << "Rock\n"; break;
        case 'p': std::cout << "Paper\n"; break;
        case 's': std::cout << "Scissors\n"; break;
    }
}
void chooseWinner(char player, char computer) {
    if (player == computer) {
        std::cout << "It's a tie!\n";
    } 
    else if ((player == 'r' && computer == 's') ||
             (player == 'p' && computer == 'r') ||
             (player == 's' && computer == 'p')) {
        std::cout << "You win!\n";
    } 
    else {
        std::cout << "Computer wins!\n";
    }
}
