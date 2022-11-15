// Write a C++ program to calculate the area of a circle
#include<iostream>
using namespace std;
int main()
{
    float r,area;
    cout<<"Enter Radius of Circle:";
    cin>>r;
    area= 3.14 * r * r;
    cout<<"The area of circle is "<<area;
    return 0;
}