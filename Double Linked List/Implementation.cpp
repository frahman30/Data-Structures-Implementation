#include <iostream>
#include <conio.h>
#include "Node.h"
#include "List.h"
using namespace std;

Node::Node()
{
    this->Data = 0;
    this->Next = NULL;
    this->Previous = NULL;
}
int Node::getData()
{
    return this->Data;
}
Node* Node::getNext()
{
    return this->Next;
}
Node* Node::getPrevious()
{
    return this->Previous;
}
void Node::setData(int Data)
{
    this->Data = Data;
}
void Node::setNext(Node* Next)
{
    this->Next = Next;
}
void Node::setPrevious(Node* Previous)
{
    this->Previous = Previous;
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
    Node *myNode = new Node();
    myNode->setData(Data);

    if (Head==NULL)
    {
        Head = myNode;
    }
    else
    {
        Head->setPrevious(myNode);
        myNode->setNext(Head);
        Head = myNode;
    }
}
void List::insertAtTail(int Data)
{
    if (Head==NULL)
    {
        insertAtHead(Data);
    }
    else
    {
        Node* myNode = new Node();
        Node* Temp = new Node();
        Temp = Head;
        myNode->setData(Data);
        while(Temp->getNext()!=NULL)
        {
            Temp = Temp->getNext();
        }
        Temp->setNext(myNode);
        myNode->setPrevious(Temp);
    }
}
void List::insertAtTarget(int Data, int Index)
{
    Node* myNode = new Node();
    Node* Temp = new Node();

    myNode->setData(Data);
    Temp = Head;

    while(Temp->getData()!=Index)
    {
        Temp = Temp->getNext();
    }
    Temp->getNext()->setPrevious(myNode);
    myNode->setNext(Temp->getNext());
    Temp->setNext(myNode);
    myNode->setPrevious(Temp);
}
void List::deleteAtHead()
{
    if (!Head)
    {
        cout << "\nList is empty.";
    }
    else
    {
        Head = Head->getNext();
        delete Head->getPrevious();
        Head->getNext()->setPrevious(NULL);
    }
}
void List::deleteAtTail()
{
    if (!Head)
    {
        cout << "\nList is empty.";
    }
    else
    {
        Node* Temp = Head;
        while(Temp->getNext()!=NULL)
        {
            Temp = Temp->getNext();
        }
        Temp->getPrevious()->setNext(NULL);
        delete Temp;
    }
}
void List::printAll()
{
    Node* Temp = new Node();
    Temp = Head;
    while(Temp!=NULL)
    {
        cout << "\nData is: " << Temp->getData();
        Temp = Temp->getNext();
    }
}



















