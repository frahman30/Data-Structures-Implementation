#include <iostream>
#include <conio.h>
#include <string>
#include "Node.h"
#include "List.h"
using namespace std;

int main()
{
    List L1;
    int myArray[5];
    for (int i=0;i<5;i++)
    {
        myArray[i] = i+101;
        L1.insertAtTail(myArray[i]);
    }
    //L1.insertAtTarget(106, 90);
    //L1.deleteAtHead();
    //L1.deleteAtTail();
    L1.deleteAtTarget(100);

    L1.printAll();
    getch();
    return 0;
}
