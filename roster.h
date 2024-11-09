#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "student.h"

class Roster {
public:
    Student* classRosterArray[5];
    int classSize;
    
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysIncourse1, int daysIncourse2, int daysIncourse3, std::string degreeProgram);
    void printAll();
    void printAverageDaysInCourse(std::string studentID);
    void printDegreeProgram(Degree::degreeProgram degreeProgram);
    void remove(std::string studentID);
    void printInvalidEmails();
    ~Roster();
   
};

#endif
