#include <iostream>
#include <sstream>
#include <string>
#include "student.h"
#include "roster.h"

void parseStudentData(std::string studentInfo, int i)
{

   string parsedVariables[9];

   int numberOfVariables = sizeof(parsedVariables) / sizeof(parsedVariables[0]);

   istringstream inSS(studentInfo);

   for (int i = 0; i < numberOfVariables; i++)
   {
      getline(inSS, parsedVariables[i], ',');
   }

   std::string studentId = parsedVariables[0];
   std::string firstName = parsedVariables[1];
   std::string lastName = parsedVariables[2];
   std::string studentEmail = parsedVariables[3];
   std::string age = parsedVariables[4];
   int courseDays1 = stoi(parsedVariables[5]);
   int courseDays2 = stoi(parsedVariables[6]);
   int courseDays3 = stoi(parsedVariables[7]);
   std::string className = parsedVariables[8];
}

int main()
{

   cout << "Scripting and Programming - Applications - C867, C++, Student Id: 012234098, Matthew Lewis" << endl;

   Roster classRoster;

   const std::string studentData[] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Matthew,Lewis,mlewis472@yahoo.com,28,19,20,40,SOFTWARE"};

   int numberOfStudents = sizeof(studentData) / sizeof(studentData[0]);

   for (int i = 0; i < numberOfStudents; i++)
   {
      std::string studentInfo = studentData[i];

      std::string parsedVariables[9];

      int numberOfVariables = sizeof(parsedVariables) / sizeof(parsedVariables[0]);

      istringstream inSS(studentInfo);

      for (int i = 0; i < numberOfVariables; i++)
      {
         getline(inSS, parsedVariables[i], ',');
      }

      std::string studentId = parsedVariables[0];
      std::string firstName = parsedVariables[1];
      std::string lastName = parsedVariables[2];
      std::string studentEmail = parsedVariables[3];
      std::string age = parsedVariables[4];
      int courseDays1 = stoi(parsedVariables[5]);
      int courseDays2 = stoi(parsedVariables[6]);
      int courseDays3 = stoi(parsedVariables[7]);
      std::string className = parsedVariables[8];

     classRoster.add(studentId, firstName, lastName, studentEmail);
   }

   return 0;
}
