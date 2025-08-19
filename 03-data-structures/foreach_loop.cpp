#include <iostream>

int main() {

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    int grades[] = {65, 70, 75, 80, 85, 90, 95};

    for(int grade : grades) {
        std::cout << grade << '\n';
    }

    return 0;
}