/*
Write a program lower.cpp that prints the bottom-left half of a square, given the side length
*/
#include <iostream>
int main()
{
    int size;
    std::cout << "Enter side length: ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++){
            std::cout << "*";
        }
            std::cout << std::endl;
    }
}