#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "List.h"

class List
{
private:
    Node* Head;
    Node* Tail;
public:
    List();
    Node* getHead();
    Node* getTail();
    void setHead(Node* Head);
    void setTail(Node* Tail);
    void insertAtHead(int Data);
    void insertAtTail(int Data);
    void printAll();
};

#endif // LIST_H_INCLUDED
