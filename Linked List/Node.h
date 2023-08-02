#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node
{
private:
    int Data;
    Node* Next;
public:
    Node();
    int getData();
    Node* getNext();
    void setData(int Data);
    void setNext(Node* Next);
};


#endif // NODE_H_INCLUDED
