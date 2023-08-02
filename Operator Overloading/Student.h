#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <string>
using namespace std;

class Student
{
private:
    int Cms;
    string Name;
    float Gpa;
public:
    Student();
    int getCms();
    string getName();
    float getGpa();
    void setCms(int Cms);
    void setName(string Name);
    void setGpa(float Gpa);
    friend istream& operator >> (istream& Input, Student& myStudent);
    friend ostream& operator << (ostream& Output, const Student myStudent);
};


#endif // STUDENT_H_INCLUDED
