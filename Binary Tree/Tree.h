#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "Node.h"

class Tree
{
private:
    Node* Root;
public:
    Tree();
    void Insert(int Data);
private:
    Node* Insert(Node* Root, int Data);
};

#endif // TREE_H_INCLUDED
