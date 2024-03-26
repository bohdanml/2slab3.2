#pragma once
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age);
    Person(const Person& other); 

    virtual ~Person() {}

    virtual void setName(const std::string& name);

    virtual void setAge(int age);

    virtual std::string getName() const;

    virtual int getAge() const;

    virtual std::string toString() const;

    Person& operator=(const Person& other); 

    friend std::ostream& operator<<(std::ostream& os, const Person& person); 
    friend std::istream& operator>>(std::istream& is, Person& person); 
};
