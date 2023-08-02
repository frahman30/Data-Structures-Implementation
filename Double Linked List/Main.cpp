#include <iostream>
#include <conio.h>
#include "Node.h"
#include "List.h"
using namespace std;

int main()
{
    List L1;
    L1.insertAtTail(10);
    L1.insertAtTail(20);
    L1.insertAtTail(30);
    L1.insertAtTail(40);
    L1.insertAtTail(50);
    L1.insertAtTarget(35, 30);
    L1.deleteAtTail();
    L1.printAll();
    return 0;
}
