#include <iostream>
#include "roster.h"
#include "student.h"

void Roster::add(std::string studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysIncourse1, int daysIncourse2, int daysIncourse3, string degreeProgram) {
    classRosterArray[classSize] = new Student(studentId, firstName, lastName, emailAddress, age, daysIncourse1, daysIncourse2, daysIncourse3,  degreeProgram);
    classSize++;
}

void Roster::printAll() {
    for(int i = 0; classSize > i; i++) {
        classRosterArray[i]-> print();
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    for(int i = 0; classSize > i; i++) {
        if (classRosterArray[i]-> getStudentId() == studentID) {
            cout << studentID;
            for (int i = 0; i < 3; i++) {
               cout << classRosterArray[i]-> getDaysToCompleteCourse(i);
                if(i <= 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }
}
