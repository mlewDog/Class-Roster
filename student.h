#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"

using namespace std;

class Student
{
public:
    string getStudentId() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int getDaysToCompleteCourse(int i) const;
    string getDegreeProgram();

    void setStudentId(string studentId);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setAge(int age);
    void setDaysToCompleteCourse(int daysIncourse1, int daysIncourse2, int daysIncourse3);
    void setDegreePorgram(string degreeProgram);
    void print();

    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourse[3];
    Degree::degreeProgram degreeProgram;
    

    Student(string studentId, string firstName, string lastName, string emailAddress, int age, int daysIncourse1, int daysIncourse2, int daysIncourse3, string degreeProgram)
    {
        setStudentId(studentId);
        setFirstName(firstName);
        setLastName(lastName);
        setEmailAddress(emailAddress);
        setAge(age);
        setDaysToCompleteCourse(daysIncourse1, daysIncourse2, daysIncourse3);
        setDegreePorgram(degreeProgram);
    }
};

#endif
