/************************************************************************************************************

Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.

************************************************************************************************************/

#include <iostream>
#include <cmath>

#define PI 3.14159

class Circle // zdefiniowanie klasy "Circle"
{
    private:
    double radius;  // private member variable

    public:
    Circle (double rad): radius(rad){}

    double PoleKola() // utworzenie funkcji w klasie zwracającej pole kola
    {
        return PI * pow(radius, 2);
    }

    double ObwodKola() // utworzenie funkcji w klasie zwracającej obwod kola
    {
        return PI * 2 * radius;
    }


    protected:
    
};

int main()
{
    double radius;
    double pole,obwod;

    std::cout << "Wpisz promiec (radius) kola: ";
    std::cin >> radius;

    Circle circle(radius); // utworzenie obiektu 

    pole = circle.PoleKola();
    obwod = circle.ObwodKola();

    std::cout << "Pole kola jest rowne = " << pole <<'\n';
    std::cout << "Obwod kola jest rowny = " << obwod <<'\n';
    
    return 0;
    
}
