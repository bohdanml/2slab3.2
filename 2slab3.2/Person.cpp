
#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age) {
    if (age < 0) {
        std::cerr << "Error: Age cannot be negative." << std::endl;
        exit(1);
    }
}

Person::Person(const Person& other) : name(other.name), age(other.age) {} 

void Person::setName(const std::string& name) {
    this->name = name;
}

void Person::setAge(int age) {
    if (age < 0) {
        std::cerr << "Error: Age cannot be negative." << std::endl;
        exit(1);
    }
    this->age = age;
}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

std::string Person::toString() const {
    return "Name: " + name + ", Age: " + std::to_string(age);
}

Person& Person::operator=(const Person& other) { 
    if (this != &other) {
        name = other.name;
        age = other.age;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << person.toString();
    return os;
}

std::istream& operator>>(std::istream& is, Person& person) {
    std::string name;
    int age;
    std::cout << " name: ";
    is >> name;
    std::cout << " age: ";
    is >> age;
    person.setName(name);
    person.setAge(age);
    return is;
}
