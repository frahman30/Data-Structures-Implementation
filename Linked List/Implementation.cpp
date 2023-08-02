#include <iostream>
#include <conio.h>
#include <string>
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
Node* List::createNode()
{
    Node* Temp = new Node();
    if (Head == NULL)
    {
        Head = Temp;
    }
    return Temp;
}
void List::insertAtHead(int Data)
{
    Node* myNode = new Node();
    myNode->setData(Data);
    if (Head!=NULL)
    {
        myNode->setNext(Head);
        Head = myNode;
    }
    else
    {
        Head = myNode;
    }
}
void List::insertAtTail(int Data)
{
    Node* myNode = new Node();
    myNode->setData(Data);
    if (Head!=NULL)
    {
        Node* Temp = Head;
        while (Temp->getNext()!=NULL)
        {
            Temp = Temp->getNext();
        }
        Temp->setNext(myNode);
        myNode->setNext(NULL);
    }
    else
    {
        insertAtHead(Data);
    }
}
void List::insertAtTarget(int Data, int Index)
{
    Node* Temp = Head;
    Node* myNode = new Node();
    myNode->setData(Data);
    bool Status = false;
    while(Temp->getNext()!=NULL)
    {
        if (Temp->getData()==Index)
        {
            Status = true;
            break;
        }
        else
        {
            Temp = Temp->getNext();
        }
    }
    if (Status)
    {
        myNode->setNext(Temp->getNext());
        Temp->setNext(myNode);
    }
    else
    {
        cout << "\nSorry, no data found for your query.";
    }
}
void List::printAll()
{
    Node* Temp = Head;
    if (Head==NULL)
    {
        cout << "\nList is empty.";
    }
    else
    {
        while(Temp!=NULL)
        {
            cout << "\nData is: " << Temp->getData();
            Temp = Temp->getNext();
        }
    }
}
void List::deleteAtHead()
{
    if (Head==NULL)
    {
        cout << "\nList is empty.";
    }
    else
    {
        Node* Temp = Head;
        Head = Temp->getNext();
        delete Temp;
    }
}
void List::deleteAtTail()
{
    if (Head==NULL)
    {
        cout << "\nList is empty.";
    }
    else
    {
        Node* Temp = Head;
        while (Temp->getNext()->getNext()!=NULL)
        {
            Temp = Temp->getNext();
        }
        Temp->setNext(NULL);
        delete[] Tail;
        Tail = Temp;
    }
}
void List::deleteAtTarget(int Target)
{
    Node* Temp = Head;
    while(Temp->getNext()!=NULL)
    {
        if (Temp->getNext()->getData()==Target)
        {
            break;
        }
        else
        {
            Temp = Temp->getNext();
        }
    }
    if (Temp->getNext()==NULL)
    {
        cout << "\nSorry, no date found for your query.";
    }
    else
    {
        Temp->setNext(Temp->getNext()->getNext());
        delete Temp->getNext();
    }

}








