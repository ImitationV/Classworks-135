/*
Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/
#include <iostream>
int main()
{
    long long int fib[60];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 60; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    /*----To Display the whole array---- 
    for (int i = 0; i < 60; i++)
    {
        std::cout << fib[i] << " ";
    }
    */
    std::cout << fib[59];
    std::cout << std::endl;
    return 0;
}