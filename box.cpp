/*
Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.

Also, print a line Shape: between user input and the printed shape (to separate input from output).
*/

#include <iostream>

int main()
{
    int width, height;
    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;

    std::cout << "\nShape: " << std::endl;

    for (int i = 1; i < width; i++)
    {
        std::cout << "*";
        for (int j = 1; j <= height; j++)
        {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}