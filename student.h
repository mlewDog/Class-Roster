#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h"

class Student
{
public:
    std::string getStudentId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getEmailAddress() const;
    int getAge() const;
    int getDaysToCompleteCourse(int i) const;
    std::string getDegreeProgram();

    void setStudentId(std::string studentId);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setEmailAddress(std::string emailAddress);
    void setAge(int age);
    void setDaysToCompleteCourse(int daysIncourse1, int daysIncourse2, int daysIncourse3);
    void setDegreePorgram(std::string degreeProgram);
    void print();

    std::string studentId;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int daysToCompleteCourse[3];
    Degree::degreeProgram degreeProgram;
    
    Student(std::string studentId, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysIncourse1, int daysIncourse2, int daysIncourse3, std::string degreeProgram)
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
