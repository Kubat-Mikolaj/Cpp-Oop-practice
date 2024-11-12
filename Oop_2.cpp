/************************************************************************************************************

Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.

************************************************************************************************************/

#include <iostream>
#include <cmath>

class Rectangle
{
    private:
    double length, width;

    public:
    Rectangle (double len, double width): length(len), width(width){}


    double PoleProstokata()
    {
        return (length * width);
    }

    double ObwodProstokota()
    {
        return (2 * length) + (2* width);
    }

    protected:
};

int main()
{
    double length, width, pole, obwod;

    std::cout << "Wpisz dlugosc (length) prostokata: ";
    std::cin >> length;

    std::cout << "Wpisz wysokosc (width) prostokata: ";
    std::cin >> width;

    Rectangle rectangle(length, width);

    pole = rectangle.PoleProstokata();
    obwod = rectangle.ObwodProstokota();

    std::cout << "Pole prostokota jest rowne = " << pole <<'\n';
    std::cout << "Obwod prostokota jest rowne = " << obwod <<'\n';

    return 0;
}

