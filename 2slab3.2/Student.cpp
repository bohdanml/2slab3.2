
#include "Student.h"
#include <iostream>

Student::Student(const std::string& name, int age, const std::string& university) : Person(name, age), university(university) {}

Student::Student(const Student& other) : Person(other), university(other.university) {} 

void Student::setUniversity(const std::string& university) {
    this->university = university;
}

std::string Student::getUniversity() const {
    return university;
}

std::string Student::toString() const {
    return "name: " + getName() + ", age: " + std::to_string(getAge()) + ", university: " + university;
}

Student& Student::operator=(const Student& other) { 
    if (this != &other) {
        
        Person::operator=(other);
        university = other.university;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << student.toString();
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) {
    std::string name;
    int age;
    std::string university;
    std::cout << " name: ";
    is >> name;
    std::cout << " age: ";
    is >> age;
    std::cout << " university: ";
    is >> university;
    student.setName(name);
    student.setAge(age);
    student.setUniversity(university);
    return is;
}
