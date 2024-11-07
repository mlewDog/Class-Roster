#include "student.h"
#include "roster.h"
#include <iostream>

using namespace std;

string Student::getStudentId() const {
    return studentId;
}

string Student::getFirstName() const {
    return firstName;
}

string Student::getLastName() const {
    return lastName;
}

string Student::getDegreeProgram() {
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

string Student::getEmailAddress() const {
    return emailAddress;
}

void Student::setStudentId(string studentId) {
    this->studentId = studentId;
}

void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}

void Student::setLastName(string lastName) {
    this->lastName = lastName;

}

void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setDaysToCompleteCourse(int daysIncourse1, int daysIncourse2, int daysIncourse3) {
    cout << daysIncourse1 << " " << daysIncourse2 << " " << daysIncourse3 << " " << endl;
    this->daysToCompleteCourse[0] = { daysIncourse1};
    this->daysToCompleteCourse[1] = { daysIncourse2};
    this->daysToCompleteCourse[2] = { daysIncourse3};
}


void Student::setDegreePorgram(string degreeProgram) {
    if (degreeProgram == "SECURITY") {
        this->degreeProgram = Degree::SECURITY;
    } else if (degreeProgram == "NETWORK") {
        this->degreeProgram = Degree::NETWORK;
    } else if (degreeProgram == "SOFTWARE") {
        this->degreeProgram = Degree::SOFTWARE;
    }
    }

void Student::print()  {
    cout << "Student ID: " << getStudentId() << " ";
    cout << "First Name: " << getFirstName() << " ";
    cout << "Last Name: " << getLastName() << " ";
    cout << "Age: " << getAge() << " ";
    cout << getDaysToCompleteCourse(1);
    cout << " } ";
    cout << "Degree Program: " << getDegreeProgram();
    cout << endl;
}

