/************************************************************************************************************

Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
Include member functions to set and get these variables, as well as to validate if the date is valid.
************************************************************************************************************/

#include <iostream>
#include <string>

class Date
{

    private:
    int day, month, year;

    public:

    // Create a constructor 

    Date(int d, int m, int y): day(d), month(m), year(y){}

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    bool IsDataValid()
    {   
        // Check if the month is valid
        if(month < 1 || month > 12)
        {
            return false;
        }
        
        // Check if the day is valid (till 31)
        if(day < 1 || day > 31)
        {
            return false;
        }

        // Check for 30 days
        if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30)
        {
            return false;
        }

        // leap year

        if(month == 2)
        {
            if((year % 4 == 0 % 100 != 0) || (year % 400 == 0))
            {
                if(day > 29)
                {
                    return false;
                }
                else
                {
                    if(day > 28)
                    {
                        return false;
                    }
                }
            }
        }
    
    return true;

    }

    protected:
};

int main()
{
    int day, month, year;
    
    //Object

    Date date(0,0,0); // initialize data object with default values

    std::cout << "input day: ";
    std::cin >> day;

    std::cout << "input month: ";
    std::cin >> month;

    std::cout << "input year: ";
    std::cin >> year;

    date.setDate(day, month, year); // store provided infomration into Date object.

    //display written data

    std::cout << "Date: " << date.getDay()<<'/'<< date.getMonth()<<'/'<< date.getYear()<<'\n';

     // Validate the date
    if (date.IsDataValid())
    {
        std::cout << "The date is valid." << '\n'; // Output for a valid date
    }
    else
    {
        std::cout << "The date is invalid." << '\n'; // Output for an invalid date
    }

    return 0;
}
