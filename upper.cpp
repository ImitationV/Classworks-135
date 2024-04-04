/*
Write a program upper.cpp that prints the top-right half of a square, given the side length.
*/
#include <iostream>
int main()
{
    int size;
    std::cout << "Enter side length: ";
    std::cin >> size;

    for (int i = 1; size >= i; i++)
    {
        for (int j = i; j <= size; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        for (int k = 1; k <= i; k++)
        {
            std::cout << " ";
        }
    }
}