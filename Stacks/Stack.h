#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

class Stack
{
private:
    int Top;
    int Capacity;
    int* Array;
public:
    Stack(int Capacity);
    bool isEmpty();
    bool isFull();
    void Push(int Data);
    int Pop();
    void printAll();
};


#endif // STACK_H_INCLUDED
