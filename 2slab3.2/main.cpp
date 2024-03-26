#include <iostream>
#include "Person.h"
#include "Student.h"


Person getPersonObject() {
    std::string name;
    int age;
    std::cout << "person name: ";
    std::cin >> name;
    std::cout << " age: ";
    std::cin >> age;
    return Person(name, age);
}
Student getStudentObject() {
    std::string name;
       int age;
    std::string university;
    std::cout << "student name: ";
    std::cin >> name;
    std::cout << " age: ";
    std::cin >> age;
    std::cout << " university: ";
    std::cin >> university;
    return Student (name, age, university);
}

int main() {
    
    Person person1 = getPersonObject();
    std::cout << "Person 1: " << person1 << std::endl;

    Student student1 = getStudentObject();
    std::cout << "Student 1: " << student1 << std::endl;
    
    Person person2 = person1;
    std::cout << "Person 2 (copy Person 1): " << person2 << std::endl;

   
    Person person3("Vasya", 25);
    std::cout << "Before assignment: " << person3 << std::endl;
    person3 = person1;
    std::cout << "After assignment: " << person3 << std::endl;

    return 0;
}
