#include <iostream>
#include <conio.h>
#include "Que.h"
using namespace std;

Que::Que(int Capacity)
{
    this->Front = -1;
    this->Rear = -1;
    this->Capacity = Capacity;
    this->Array = new int[Capacity];
}
