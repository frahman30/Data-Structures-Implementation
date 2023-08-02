#ifndef QUE_H_INCLUDED
#define QUE_H_INCLUDED

class Que
{
private:
    int Rear;
    int Front;
    int Capacity;
    int* Array;
public:
    Que(int Capacity);
};


#endif // QUE_H_INCLUDED
