// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int t_1,t_2,t_3;
    float avg;
    cout<<"Enter three Numbers:";
    cin>>t_1>>t_2>>t_3;
    avg=(t_1+t_2+t_3)/3.0;
    cout<<"The Avg of three Num is "<<avg;
    return 0;
}