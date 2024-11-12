/************************************************************************************************************

Write a C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.
************************************************************************************************************/

#include <iostream>
#include <cmath>

class Person
{
    private:
    std::string name;
    int age;
    std::string country;

    public:
    void setName(const std::string & n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setCountry(const std::string & c)
    {
        country = c;
    }

    std::string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    std::string getCountry()
    {
        return country;
    }

    protected:

};

int main()
{
    Person person;

    person.setName("Mikolaj Kubat");
    person.setAge(25);
    person.setCountry("Poland");

    std::cout << "Name: " << person.getName() << '\n';
    std::cout << "Age: " << person.getAge() << '\n';
    std::cout << "Country: " << person.getCountry() << '\n';

    return 0;
   
}