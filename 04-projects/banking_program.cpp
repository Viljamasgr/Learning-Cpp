#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    // Banking program

    double balance = 5000;
    int choice = 0;

    do{
        std::cout << "*****************\n";
        std::cout << "Enter you choice:\n";
        std::cout << "*****************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    break;
            case 3: balance -= withdraw(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";
                    break;
            default:std:: cout << "Invalid choice!\n";
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Current balance: $" << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
    double amount;

    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid deposit amount!\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount;

    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "That is not a valid amount!\n";
        return 0;
    }
    else{
        return amount;
    }
}