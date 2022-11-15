// Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int i,s=0,arr[10]={1,2,3,4,5,6,7,8,9,10};
    for ( i = 0; i < 10; i++)
    {
        s+=arr[i];
    }
    cout<<"The sum of all elements of array is "<<s;
    return 0;
}