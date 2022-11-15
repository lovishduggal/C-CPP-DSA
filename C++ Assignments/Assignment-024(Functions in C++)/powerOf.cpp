// Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int powerOf(int,int);
int main()
{
    int x,y,result;
    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;
    result = powerOf(x,y);
    cout<<"The power of "<<x<<" is "<<result;
    return 0;
}
int powerOf(int x,int y)
{
    int i, sq=1;
    for ( i = 1; i <=y ; i++)
    {
        sq *= x; 
    }
    return sq;
}