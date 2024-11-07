#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"
#include <string>


using namespace std;

class Roster
{
public:
  Student* classRosterArray[5];
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress);
    void test();
};

#endif