/************************************************************************************************************

Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
Include member functions to calculate and set salary based on employee performance.

************************************************************************************************************/

#include <iostream>
#include <string>
#include <limits> // Do obsługi std::numeric_limits

class Employee
{
private:
    std::string name;
    std::string employeeID; // Typ string dla ID
    double salary;

public:
    Employee(const std::string &empName, const std::string &empId, double empSalary)
        : name(empName), employeeID(empId), salary(empSalary) {}

    void Calculate_Salary(double employee_performance)
    {
        if (employee_performance >= 0 && employee_performance <= 1)
        {
            salary *= employee_performance;
        }
        else
        {
            std::cout << "Invalid performance rating. Salary remains unchanged." << '\n';
        }
    }

    std::string getName() const 
    { 
        return name; 
    }
    std::string getEmployeeId() const 
    { 
        return employeeID; 
    }
    double getSalary() const 
    { 
        return salary; 
    }
};

int main()
{
    std::string Employee_Name;
    std::string Employee_ID; // Typ string dla ID
    double Employee_Salary;

    std::cout << "Input employee name: ";
    std::getline(std::cin, Employee_Name); // Użycie getline do wprowadzenia pełnej nazwy

    std::cout << "Input employee ID: ";
    std::getline(std::cin, Employee_ID); // Użycie getline do wprowadzenia ID

    std::cout << "Input employee salary: ";
    while (!(std::cin >> Employee_Salary)) // Sprawdzenie poprawności wprowadzenia
    {
        std::cout << "Invalid input. Please enter a numeric salary: ";
        std::cin.clear(); // Resetowanie stanu błędu
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorowanie niepoprawnych danych
    }

    Employee employee(Employee_Name, Employee_ID, Employee_Salary);

    std::cout << "\nInitial salary: " << employee.getSalary() << '\n';

    double performanceRating;
    std::cout << "Input performance rating (0.0-1.0): ";
    while (!(std::cin >> performanceRating)) // Sprawdzenie poprawności wprowadzenia
    {
        std::cout << "Invalid input. Please enter a numeric performance rating: ";
        std::cin.clear(); // Resetowanie stanu błędu
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorowanie niepoprawnych danych
    }

    employee.Calculate_Salary(performanceRating);

    std::cout << "\nUpdated salary: " << employee.getSalary() << '\n';

    return 0;
}