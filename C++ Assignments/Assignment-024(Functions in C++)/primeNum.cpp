// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
void prime(int);
int main()
{
    int N;
    cout<<"Enter Number:";
    cin>>N;
    prime(N);
    return 0;
}
void prime(int N)
{
    int i;
    for ( i = 2; i < N/2; i++)
    {
        if(N % i==0)
          break;
    }

    if(i==N)
      cout<<"Enter Number is Prime.";
    else
      cout<<"Enter Number is Not Prime.";
}