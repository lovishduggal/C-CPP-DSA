// Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Value of x:";
    cin>>x;
    cout<<"Enter Value of y:";
    cin>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"After Swaping Value of x is "<<x<<" & y is "<<y;
    return 0;
}