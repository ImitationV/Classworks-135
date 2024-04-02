/*
Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.

In the modern Gregorian calendar, a year is a leap year if it is divisible by 4, but century years are not leap years unless they are divisible by 400. Here is the pseudocode:

if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)
*/

#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year % 4 != 0)
    {
        std::cout << "Common Year";
    }
    else if (year % 100 != 0)
    {
        std::cout << "Leap Year";
    }
    else if (year % 400 != 0)
    {
        std::cout << "Common Year";
    }
    else
    {
        std::cout << "Common Year";
    }
    return 0;
}