#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node
{
private:
    int Data;
    Node* Right;
    Node* Left;
public:
    Node(int Data);
    int getData();
    Node* getRight();
    Node* getLeft();
    void setData(int Data);
    void setRight(Node* Right);
    void setLeft(Node* Left);
};


#endif // NODE_H_INCLUDED
