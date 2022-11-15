// Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;
void awap(int &, int &);
int main()
{
    int a,b;
    cout<<"Enter two Number:";
    cin>>a>>b;
    swap(a,b);
    cout<<"After swaping value of a is "<<a<<" & value of b is "<<b;

    return 0;
}
void awap(int &x, int &y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
}
