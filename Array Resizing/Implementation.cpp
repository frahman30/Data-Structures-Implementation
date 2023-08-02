#include <iostream>
#include <conio.h>
#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee()
{
    this->Id = 0;
    this->Name = "";
    this->Salary = 0.0;
}
int Employee::getId()
{
    return this->Id;
}
string Employee::getName()
{
    return this->Name;
}
double Employee::getSalary()
{
    return this->Salary;
}
void Employee::setId(int Id)
{
    this->Id = Id;
}
void Employee::setName(string Name)
{
    this->Name = Name;
}
void Employee::setSalary(double Salary)
{
    this->Salary = Salary;
}



