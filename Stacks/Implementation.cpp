#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;

Stack::Stack(int Capacity)
{
    this->Array = new int[Capacity];
    this->Top = -1;
    this->Capacity = Capacity;
}
bool Stack::isEmpty()
{
    if(this->Top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Stack::isFull()
{
    if(this->Top==this->Capacity-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::Push(int Data)
{
    if(!this->isFull())
    {
        Top = Top+1;
        this->Array[Top] = Data;
    }
    else
    {
        cout << "\nStack is full.";
    }
}
int Stack::Pop()
{
    this->Top--;
    return this->Array[Top+1];
}
void Stack::printAll()
{
    for (int i=Top;i>=0;i--)
    {
        cout << "\nData at " << i+1 << " is: " << this->Array[i];
    }
}














