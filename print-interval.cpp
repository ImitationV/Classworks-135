/*
Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.
*/

#include<iostream>
int main(){
    int lower,upper;
    std::cout<<"Please enter L: ";
    std::cin>>lower;
    std::cout<<"Please enter U: ";
    std::cin>>upper;

    for(int i=lower;i<upper;i++){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    
    return 0;
}