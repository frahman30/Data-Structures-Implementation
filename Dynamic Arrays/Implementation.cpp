#include <iostream>
#include <conio.h>
#include <string>
#include "Car.h"
using namespace std;

Car::Car()
{
    this->Name = "";
    this->Number = 0;
    this->Price = 0.0;
}
int Car::getNumber()
{
    return this->Number;
}
string Car::getName()
{
    return this->Name;
}
double Car::getPrice()
{
    return this->Price;
}
void Car::setNumber(int Number)
{
    this->Number = Number;
}
void Car::setName(string Name)
{
    this->Name = Name;
}
void Car::setPrice(double Price)
{
    this->Price = Price;
}








