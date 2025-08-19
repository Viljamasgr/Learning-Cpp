#include <iostream>

int main(){

    // sizeof() = determines the size in bytes of a:
    //            variables, data typer, class, objects, etc.

    std::string name = "John Doe";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"SpongeBob", "Patrick", "Sandy", "Squidward"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}