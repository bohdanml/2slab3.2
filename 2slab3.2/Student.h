
#pragma once
#include "Person.h"

class Student : public Person {
private:
    std::string university;
public:
    Student(const std::string& name, int age, const std::string& university);
    Student(const Student& other);

    void setUniversity(const std::string& university);

    std::string getUniversity() const;

    std::string toString() const override;

    Student& operator=(const Student& other); 

    friend std::ostream& operator<<(std::ostream& os, const Student& student); 
    friend std::istream& operator>>(std::istream& is, Student& student); 
};

