// Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int x,y,max;
    cout<<"Enter Value of x:";
    cin>>x;
    cout<<"Enter Value of y:";
    cin>>y;
    max=x>y?x:y;
    cout<<"The Max Val is "<<max;
    return 0;
}