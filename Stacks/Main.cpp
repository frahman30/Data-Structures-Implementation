#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;

int main()
{
    Stack S1(4);
    S1.Push(10);
    S1.Push(20);
    S1.Push(30);
    S1.Push(40);
    S1.Pop();
    S1.printAll();
    getch();
    return 0;
}
