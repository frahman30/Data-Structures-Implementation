#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "Node.h"

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
    Node* createNode();
    void insertAtTail(int Data);
    void insertAtHead(int Data);
    void insertAtTarget(int Data, int Index);
    void deleteAtHead();
    void deleteAtTail();
    void deleteAtTarget(int Target);
    void printAll();
};



#endif // LIST_H_INCLUDED
