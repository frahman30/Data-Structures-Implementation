#include <iostream>
#include <conio.h>
#include "Node.h"
#include "List.h"
using namespace std;

Node::Node()
{
    this->Data = 0;
    this->Next = NULL;
}
int Node::getData()
{
    return this->Data;
}
Node* Node::getNext()
{
    return this->Next;
}
void Node::setData(int Data)
{
    this->Data = Data;
}
void Node::setNext(Node* Next)
{
    this->Next = Next;
}

List::List()
{
    this->Head = NULL;
    this->Tail = NULL;
}
Node* List::getHead()
{
    return this->Head;
}
Node* List::getTail()
{
    return this->Tail;
}
void List::setHead(Node* Head)
{
    this->Head = Head;
}
void List::setTail(Node* Tail)
{
    this->Tail = Tail;
}
void List::insertAtHead(int Data)
{
    Node* Temp = new Node();
    Temp->setData(Data);
    if (Head == NULL)
    {
        Head = Temp;
    }
    else
    {
        Temp->setNext(Head);
        Head = Temp;
    }
}
void List::printAll()
{
    Node* Temp = Head;
    if (Head==NULL)
    {
        cout << "\nList is empty";
    }
    else if (Tail==NULL)
    {
        cout << "\nNo tail pointer";
    }
    else
    {
        while(Temp->getNext()!=Head)
        {
            cout << "\nData is: " << Temp->getData();
            Temp = Temp->getNext();
        }
    }
}
void List::insertAtTail(int Data)
{
    Node* Temp1 = Head;
    Node* Temp2 = new Node();
    Temp2->setData(Data);

    while(Temp1->getNext()!=Head)
    {
        Temp1 = Temp1->getNext();
    }
    if (Head==NULL)
    {
        insertAtHead(Data);
    }
    else
    {
        Temp1->getNext()->setNext(Temp2);
        Temp2->setNext(Head);
    }
}












