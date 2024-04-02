/*
Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.
*/

#include <iostream>

int main()
{
    int year, month;

    std::cout << "Enter  year: ";
    std::cin >> year;
    std::cout << "Enter month: ";
    std::cin >> month;

    if (month >= 1 && month <= 12 && month == 2)
    {
        if (year % 4 == 0)
        {
            std::cout << "29 days";
        }
        else
        {
            std::cout << "28 dayss";
        }
    }
    else if (month >= 1 && month <= 12 && month != 2)
    {
        if (month % 2 == 0)
        {
            std::cout << "30 days";
        }
        else
        {
            std::cout << "31 days";
        }
    }
    else
    {
        std::cout << "Wrong Input!";
    }

    return 0;
}