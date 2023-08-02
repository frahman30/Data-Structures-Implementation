#include <iostream>
#include <conio.h>
#include <string>
#include "Student.h"
using namespace std;

Student::Student()
{
    this->Cms = 0;
    this->Gpa = 0.0;
    this->Name = "";
}
int Student::getCms()
{
    return this->Cms;
}
string Student::getName()
{
    return this->Name;
}
float Student::getGpa()
{
    return this->Gpa;
}
void Student::setCms(int Cms)
{
    this->Cms = Cms;
}
void Student::setName(string Name)
{
    this->Name = Name;
}
void Student::setGpa(float Gpa)
{
    this->Gpa = Gpa;
}
istream& operator>>(istream& Input, Student& myStudent)
{
    cout << "\nEnter cms: ";
    Input >> myStudent.Cms;
    cout << "\nEnter name: ";
    Input >> myStudent.Name;
    cout << "\nEnter gpa: ";
    Input >> myStudent.Gpa;
    cout << "\nValues saved successfully.";
    return Input;
}
ostream& operator << (ostream& Output, const Student myStudent)
{
    Output << "\n----- Student Details -----";
    Output << "\nName: " << myStudent.Name;
    Output << "\nCms: " << myStudent.Cms;
    Output << "\nGpa: " << myStudent.Gpa;
    return Output;
}










