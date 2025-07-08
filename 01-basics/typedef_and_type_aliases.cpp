#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::String, int>> pairlist_t;
//typedef std::String text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type.
    //           Helps with radability and reduces typos.

    text_t firstName = "John";
    number_t age = 30;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}