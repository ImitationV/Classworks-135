/*
Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements. Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.
The repetition of the steps 3-4-5 can be implemented with a do while loop:
// make array and fill it with 1
do {
    // print the array
    // get i and v from the user
    // if i is good, update the array at index i
} while (...); // if the index was good, repeat

The program should keep running until the user inputs an out-of-range (invalid) index.
*/

#include <iostream>

int main()
{
    int myData[10];
    for (int i = 0; i < 10; i++)
    {
        myData[i] = 1;
    }
    int i = 0, v;
    do
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << myData[i] << " ";
        }
        std::cout << "\n\nInput index: ";
        std::cin >> i;
        std::cout << "Input value: ";
        std::cin >> v;
        myData[i] = v;
        std::cout << std::endl;
    } while (0 <= i && i < 10);
    std::cout << "Index out of range. Exit.";

    return 0;
}