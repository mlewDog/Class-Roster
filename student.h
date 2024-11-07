#ifndef STUDENT_H
#define STUDENT_H
#include <string>


using namespace std;

class Student
{
public:
    int getStudentID();
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int getDaysToCompleteCourse() const;
    string getDegreeProgram() const;

    void setFirstName(string firstName);
    void setLastName();
    void setEmailAddress();
    void setAge();
    void setDaysToCompleteCourse();
    void setDegreePorgram();

    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToCompleteCourse[3];
    string degreeProgram;

    Student(string studentId, string firstName, string lastName, string emailAddress)
    {
       this->studentId = studentId; 
       this->firstName = firstName;
       this->lastName = lastName;
       this->emailAddress = emailAddress;
        
    }
};

#endif