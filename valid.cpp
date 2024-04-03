/*
Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/
#include <iostream>
int main()
{
    int num;
    std::cout << "Please enter an integer: ";
    std::cin >> num;
    while (num != 0)
    {
        if (0 < num && num < 100)
        {
            std::cout << "\nNumber squared is " << num * num;
            break;
        }
        else
        {
            std::cout << "Please re-enter: ";
            std::cin >> num;
        }
    }

    return 0;
}