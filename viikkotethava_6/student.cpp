#include "student.h"
#include <iostream>

Student::Student(std::string name, int age) {
    Age = age;
    Name = name;
}

void Student::setAge(int age)
{
    Age = age;
}

void Student::setName(std::string name)
{
    Name = name;
}

std::string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    std::cout << "Oppilas: " << Name << " ika: " << Age << std::endl;

}
