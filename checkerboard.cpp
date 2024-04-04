/*
Write a program checkerboard.cpp that asks the user to input width and height and prints a rectangular checkerboard of the requested size using asterisks and spaces (alternating).
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

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}