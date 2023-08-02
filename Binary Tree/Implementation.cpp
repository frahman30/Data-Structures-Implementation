#include <iostream>
#include <conio.h>
#include "Node.h"
#include "Tree.h"
using namespace std;

Node::Node(int Data)
{
    this->Data = Data;
    this->Right = NULL;
    this->Left = NULL;
}
int Node::getData()
{
    return this->Data;
}
Node* Node::getRight()
{
    return this->Right;
}
Node* Node::getLeft()
{
    return this->Left;
}
void Node::setData(int Data)
{
    this->Data = Data;
}
void Node::setRight(Node* Right)
{
    this->Right = Right;
}
void Node::setLeft(Node* Left)
{
    this->Left = Left;
}
Tree::Tree()
{
    this->Root = NULL;
}
void Tree::Insert(int Data)
{
    Root = Insert(this->Root, Data);
}
Node* Tree::Insert(Node* Root, int Data)
{
    if (Root==NULL)
    {
        Root = new Node(Data);
    }
    else if (Root->getData()>Data)
    {
        Root->setLeft(Insert(Root->getLeft(), Data));
    }
    else
    {
        Root->setRight(Insert(Root->getRight(), Data));
    }
    return Root;
}









