/************************************************************************************************************

Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. 
Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

************************************************************************************************************/

#include <iostream>
#include <cmath>

const double PI = 3.14159;

class Shape
{
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0; 
};

class Circle : public Shape // Inherit from Shape
{
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() const override
    {
        return PI * pow(radius, 2);
    }

    double calculatePerimeter() const override
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape // Inherit from Shape
{
private:
    double length, width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() const override
    {
        return length * width;
    }

    double calculatePerimeter() const override 
    {
        return 2 * (length + width);
    }
};

class Triangle : public Shape // Inherit from Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const override
    {
        double semiPerimeter = (side1 + side2 + side3) / 2;
        return sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
    }

    double calculatePerimeter() const override 
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    Circle circle(7.0);
    Rectangle rectangle(4.5, 8.3);
    Triangle triangle(3.0, 4.0, 5.0);

    std::cout << "Circle: " << '\n';
    std::cout << "Area: " << circle.calculateArea() << '\n';
    std::cout << "Perimeter: " << circle.calculatePerimeter() << '\n';

    std::cout << "Rectangle: " << '\n';
    std::cout << "Area: " << rectangle.calculateArea() << '\n'; 
    std::cout << "Perimeter: " << rectangle.calculatePerimeter() << '\n'; 

    std::cout << "Triangle: " << '\n';
    std::cout << "Area: " << triangle.calculateArea() << '\n'; 
    std::cout << "Perimeter: " << triangle.calculatePerimeter() << '\n'; 

    return 0;
}