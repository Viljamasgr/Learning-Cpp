#include <iostream>

int main() {

    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if (i == 13){
            continue;
        }
        std::cout << i << '\n';
        if (i == 18){
            break;
        }
    }

    return 0;
}