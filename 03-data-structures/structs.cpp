#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled;
};

int main(){

    // struct = A structure that group related variables under one name
    //          structs can contain many different data type (string, int, double, bool, etc)
    //          variables in a struct are known as "members"
    //          members can be accessed with . "Class Member Access Operator"

    student student1;
    student1.name  = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name  = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    student student3;
    student3.name  = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    student student4;
    student4.name  = "Sandy";
    student4.gpa = 3.9;
    student4.enrolled = true;

    std::cout <<"NAME: "<< student1.name << '\n';
    std::cout <<"GPA: " << student1.gpa << '\n';
    std::cout <<"ENROLLED: " << student1.enrolled << '\n';

    std::cout <<"NAME: "<< student2.name << '\n';
    std::cout <<"GPA: " << student2.gpa << '\n';
    std::cout <<"ENROLLED: " << student2.enrolled << '\n';

    std::cout <<"NAME: "<< student3.name << '\n';
    std::cout <<"GPA: " << student3.gpa << '\n';
    std::cout <<"ENROLLED: " << student3.enrolled << '\n';

    std::cout <<"NAME: "<< student4.name << '\n';
    std::cout <<"GPA: " << student4.gpa << '\n';
    std::cout <<"ENROLLED: " << student4.enrolled << '\n';
    

    return 0;
}