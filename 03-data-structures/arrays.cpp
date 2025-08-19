#include <iostream>

int main() {

    // array = a data strcuture that can hold multiple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    double prices[4];

    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout <<  prices[0] << '\n';
    std::cout <<  prices[1] << '\n';
    std::cout <<  prices[2] << '\n';
    std::cout <<  prices[3] << '\n';

    return 0;
}