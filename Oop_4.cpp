/************************************************************************************************************

Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
Implement member functions to get and set these variables.

************************************************************************************************************/

#include <iostream>
#include <string>

class Car
{
    private:
    std::string company;
    std::string model;
    int year;

    public:
    Car(const std::string & company, const std::string & model, int year): company(company), model(model), year(year){}

    std::string getCompany()
    {
        return company;
    }

    std::string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    void setCompany(const std::string & company)
    {
        this -> company = company;
    }

    void setModel(const std::string & model)
    {
        this -> model = model;
    }

    int setYear(int year)
    {
        this -> year = year;
    }

    protected:
};

int main()
{
    
    Car car("Toyota", "Camry", 2015);

    std::cout << "Company: " << car.getCompany() << '\n';
    std::cout << "Model: " << car.getModel() << '\n';
    std::cout << "Year: " << car.getYear() << '\n';

    car.setCompany("BMW");
    car.setModel("M5");
    car.setYear(2020);

    std::cout << "\nUpdate Company: " << car.getCompany() << '\n';
    std::cout << "Update Model: " << car.getModel() << '\n';
    std::cout << "Update Year: " << car.getYear() << '\n';

    return 0;

}
