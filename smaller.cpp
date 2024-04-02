/*
Write a program "smaller.cpp" that asks the user to input two integer numbers and prints out the smaller of the two.
*/

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    if(num1<num2){
        printf("The smaller number between %d and %d is %d",num1,num2,num1);
    }
    else{
        printf("The smaller number between %d and %d is %d",num1,num2,num2);
    }
    return 0;
}