#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node
{
private:
    int Data;
    Node* Next;
    Node* Previous;
public:
    Node();
    int getData();
    Node* getNext();
    Node* getPrevious();
    void setData(int Data);
    void setNext(Node* Next);
    void setPrevious(Node* Previous);
};


#endif // NODE_H_INCLUDED
