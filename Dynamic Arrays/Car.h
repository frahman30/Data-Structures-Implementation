#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <string>

class Car
{
private:
    int Number;
    std::string Name;
    double Price;
public:
    Car();
    int getNumber();
    std::string getName();
    double getPrice();
    void setNumber(int Number);
    void setName(std::string Name);
    void setPrice(double Price);
};


#endif // CAR_H_INCLUDED
