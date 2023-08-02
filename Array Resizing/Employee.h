#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>
using namespace std;

class Employee
{
private:
    int Id;
    string Name;
    double Salary;
public:
    Employee();
    int getId();
    string getName();
    double getSalary();
    void setId(int Id);
    void setName(string Name);
    void setSalary(double Salary);
};


#endif // EMPLOYEE_H_INCLUDED
