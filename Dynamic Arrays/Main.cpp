#include <iostream>
#include <conio.h>
#include <string>
#include "Car.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int *integerArray = new int[5];
    for (int i=0;i<5;i++)
    {
        integerArray[i] = i+1050;
    }

    cout << "\n\nPrinting using pointers";
    for (int i=0;i<5;i++)
    {
        cout << "\nInteger at " << i+1 << " is: " << *integerArray;
        integerArray++;
    }
    integerArray-=5;

    cout << "\n\nPrinting using index";
    for (int i=0;i<5;i++)
    {
        cout << "\nInteger at " << i+1 << " is: " << integerArray[i];
    }

    Car *carArray = new Car[5];
    for (int i=0;i<5;i++)
    {
        carArray[i].setName("");
        carArray[i].setNumber(0);
        carArray[i].setPrice(0.0);
    }
    carArray[0].setPrice(1000.50);
    carArray[1].setPrice(1150.20);
    carArray[2].setPrice(1500.30);
    carArray[3].setPrice(1080.60);
    carArray[4].setPrice(1900.80);

    cout << "\n\nPrinting using pointers";
    for (int i=0;i<5;i++)
    {
        cout << "\nCar price at " << i+1 << " is: " << carArray->getPrice();
        carArray++;
    }
    carArray-=5;

    cout << "\n\nPrinting using index";
    for (int i=0;i<5;i++)
    {
        cout << "\nCar price at " << i+1 << " is: " << carArray[i].getPrice();
    }

    getch();
    return 0;
}
