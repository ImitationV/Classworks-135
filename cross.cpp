/*
Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.
*/

#include <iostream>
int main()
{
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}