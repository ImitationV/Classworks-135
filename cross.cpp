/*
Write a program cross.cpp that asks the user to input the shape size, and prints a diagonal cross of that dimension.
*/

#include <iostream>
int main()
{
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j<=size; j++)
        {
            if (i == j || j == (size + 1 - i))
            {
                std::cout << "*"; // Repeats until inputs are done
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}