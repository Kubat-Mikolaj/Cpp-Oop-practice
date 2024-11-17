/************************************************************************************************************

Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
Include member functions to calculate the grade based on the marks and display the student's information.

************************************************************************************************************/

#include <iostream>
#include <string>

class Student
{
    private:

    std::string name;
    std::string student_class;
    int roll_number;
    double marks;

    public:

    Student (const std::string &Student_Name, const std::string &Student_Class, int Roll_Number, double Student_Marks) 
        : name(Student_Name), student_class(Student_Class), roll_number(Roll_Number), marks(Student_Marks){}

    std::string Calculate_Grade()
    {
        if (marks >= 90)
        {
            return "Grade: A";
        }
        else if (marks >= 80)
        {
            return "Grade: B";
        }
        else if (marks >= 70)
        {
            return "Grade: C";
        }
        else if (marks >= 60)
        {
            return "Grade: D";
        }
        else
        {
            return "Grade: F";
        }
    }

    void Display_Student_Information()
    {
        std::cout << "\nName: " << name << '\n';
        std::cout << "Class: " << student_class << '\n';
        std::cout << "Roll Number: " << roll_number << '\n';
        std::cout << "Marks: " << marks << '\n';
        std::cout << "Grade: " << Calculate_Grade() << '\n';
    }



    protected:
};


int main()
{
    // Create object

    std::string StudentName, StudentClass;
    int rollNumber;
    double StudentMarks;


    std::cout << "Student details: ";
    std::cout << "\nName; ";
    std::getline(std::cin, StudentName);

    std::cout << "Class; ";
    std::getline(std::cin, StudentClass);

    std::cout << "Roll Number: ";
    std::cin >> rollNumber;

    std::cout << "Marks: ";
    std::cin >> StudentMarks;



    Student student(StudentName, StudentClass, rollNumber, StudentMarks);


    student.Display_Student_Information();

    return 0;
}