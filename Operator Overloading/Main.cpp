#include <iostream>
#include <conio.h>
#include <string>
#include "Student.h"
using namespace std;

int main()
{
    cout << "\nEnter number of students to create: ";
    int Number = 0;
    cin >> Number;
    Student *studentArray = new Student[Number]();
    cout << "\n" << Number << " students created successfully";
    cin >> studentArray[0]; //cin.operator>>(istream& Input, Student& myStudent)
    cout << studentArray[0];
    getch();
    return 0;
}
