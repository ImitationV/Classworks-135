/*
Write a program smaller3.cpp that asks the user to input three integer numbers, and prints out the smallest of the three.

(Hint: There are many possible solutions here. One possible strategy: Given numbers x, y, and z, you can first compare x and y, take whichever is smaller and compare it with z.)
*/

#include <iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "Enter a first number: ";
    std::cin >> num1;
    std::cout << "Enter a second number: ";
    std::cin >> num2;
    std::cout << "Enter a third number: ";
    std::cin >> num3;

    if (num1 <= num2 && num1 <= num3)
    {
        std::cout << "The smaller of the three is " << num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        std::cout << "The smaller of the three is " << num2;
    }
    else if (num3 <= num1 && num3 <= num2)
    {
        std::cout << "The smaller of the three is " << num3;
    }
    else
    {
        std::cout << "Numbers are equal";
    }
    return 0;
}