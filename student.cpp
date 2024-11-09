#include "student.h"
#include "roster.h"
#include <iostream>

std::string Student::getStudentId() const {
    return studentId;
}

std::string Student::getFirstName() const {
    return firstName;
}

std::string Student::getLastName() const {
    return lastName;
}

std::string Student::getDegreeProgram() {
    if (degreeProgram == Degree::SECURITY) {
        return "Security";
    } else if (degreeProgram == Degree::NETWORK) {
        return "Network";
    } else if (degreeProgram == Degree::SOFTWARE) {
        return "Software";
    } else {
        return "This Class does not Exist";
    }
}

int Student::getAge() const {
    return age;
}

int Student::getDaysToCompleteCourse(int i) const {
    
    
    
    return daysToCompleteCourse[i];
}

std::string Student::getEmailAddress() const {
    return emailAddress;
}

void Student::setStudentId(std::string studentId) {
    this->studentId = studentId;
}

void Student::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(std::string lastName) {
    this->lastName = lastName;

}

void Student::setEmailAddress(std::string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysToCompleteCourse(int daysIncourse1, int daysIncourse2, int daysIncourse3) {
    this->daysToCompleteCourse[0] = { daysIncourse1};
    this->daysToCompleteCourse[1] = { daysIncourse2};
    this->daysToCompleteCourse[2] = { daysIncourse3};
}


void Student::setDegreePorgram(std::string degreeProgram) {
    if (degreeProgram == "SECURITY") {
        this->degreeProgram = Degree::SECURITY;
    } else if (degreeProgram == "NETWORK") {
        this->degreeProgram = Degree::NETWORK;
    } else if (degreeProgram == "SOFTWARE") {
        this->degreeProgram = Degree::SOFTWARE;
    }
    }

void Student::print()  {
    std::cout << "Student ID: " << getStudentId() << " ";
    std::cout << "First Name: " << getFirstName() << " ";
    std::cout << "Last Name: " << getLastName() << " ";
    std::cout << "Age: " << getAge() << " ";
    
    std::cout << "daysInCourse: {";
    for(int i = 0; i < 3; i++) {
        std::cout << getDaysToCompleteCourse(i);
        
        if(i < 2) {
            std::cout << ", ";
        }
    }
    
    std::cout << "} ";
    std::cout << "Degree Program: " << getDegreeProgram();
    std::cout << std::endl;
}
