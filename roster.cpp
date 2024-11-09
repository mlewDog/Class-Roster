#include <iostream>
#include <string>
#include "roster.h"
#include "student.h"

void Roster::add(std::string  studentId, std::string  firstName, std::string  lastName, std::string  emailAddress, int age, int daysIncourse1, int daysIncourse2, int daysIncourse3, std::string degreeProgram) {
    classRosterArray[classSize] = new Student(studentId, firstName, lastName, emailAddress, age, daysIncourse1, daysIncourse2, daysIncourse3,  degreeProgram);
    classSize++;
}

void Roster::printAll() {
    for(int i = 0; classSize > i; i++) {
        classRosterArray[i]-> print();
    }
}

void Roster::printAverageDaysInCourse(std::string studentID) {
    std::cout  << "Student " << studentID << ": ";
    for(int i = 0; classSize > i; i++) {
        if (classRosterArray[i]-> getStudentId() == studentID) {
            for (int j = 0; j < 3; j++) {
               std::cout  << classRosterArray[i]-> getDaysToCompleteCourse(j);
                if(j <= 1) {
                    std::cout  << ", ";
                }
            }
            std::cout  << std::endl  ;
        }
    }
}

void Roster::printDegreeProgram(Degree::degreeProgram degreeProgram) {
    std::string degree;
    if (degreeProgram == Degree::SOFTWARE) {
        degree = "Software";
    } else if(degreeProgram == Degree::NETWORK) {
        degree = "Network";
    } else if(degreeProgram == Degree::SECURITY) {
        degree = "Security";
    }
    std::cout  << "Students based on degree program: " << std::endl  ;
    for(int i = 0; classSize > i; i++) {
        if (classRosterArray[i]-> getDegreeProgram() == degree) {
            classRosterArray[i]-> print();
        }
    }
}

void Roster::remove(std::string studentId) {
    bool studentFound = false;
    for(int i = 0; classSize > i; i++) {
        if (classRosterArray[i]-> getStudentId() == studentId) {
            studentFound = true;
            std::cout  << "Student " << classRosterArray[i]-> getStudentId() << " removed from roster." << std::endl ;
            delete classRosterArray[i];
            classSize --;
            
            for(int j = i; j < classSize; j++) {
                classRosterArray[i] = classRosterArray[j + 1];
            }
        }
    }
    
    if(!studentFound) {
        std::cout  << "Student "  << studentId << " was not found" << std::endl ;
    }
}

void Roster::printInvalidEmails() {
    std::string invalidEmails[0];
    for(int i = 0; i < classSize; i++) {
        std::string studentEmail = classRosterArray[i]-> getEmailAddress();

        int atSymbolIndex;
        int emailSpaceIndex;
        int dotIndex;
        
        atSymbolIndex = studentEmail.find("@");
        emailSpaceIndex = studentEmail.find(" ");
        dotIndex = studentEmail.find(".");
        
        if(atSymbolIndex == -1 & dotIndex != -1 || emailSpaceIndex != -1) {
            std::cout  << studentEmail << " is a invalid email" << std::endl ;
        }
    }
}


Roster::~Roster() {
    for(int i = 0; i < classSize; i++) {
        delete classRosterArray[i];
    }
}
