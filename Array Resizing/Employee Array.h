#ifndef EMPLOYEE_ARRAY_H_INCLUDED
#define EMPLOYEE_ARRAY_H_INCLUDED

#include <string>
using namespace std;

class EmployeeArray
{
private:
    int Length;
    int Counter;
    Employee *E1;
public:
    EmployeeArray();
    EmployeeArray(int Length, int Counter);
    int getLength();
    void setLength(int Length);
    int getCounter();
    void setCounter(int Counter);
    Employee* getE1();
    bool addEmployee();
    void resizeArray();
};



#endif // EMPLOYEE_ARRAY_H_INCLUDED
