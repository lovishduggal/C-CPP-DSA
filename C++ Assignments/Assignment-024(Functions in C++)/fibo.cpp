// Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include<iostream>
using namespace std;
int fibo(int);
int main()
{
    int x, result;
    cout<<"Enter Number:";
    cin>>x;
    result = fibo(x);
    if(result)
    {
        cout<<"Enter Number is a term of Fibonacci series";
    }
    else
    {
        cout<<"Enter Number is not a term of Fibonacci series";
    }

    return 0;
}
int fibo(int N)
{
    int i,a=-1,b=1,c;
    for ( i = 0; i <= (N+1) ; i++)
    {
        c=a+b;
        cout<<c<<" ";
        if(c==N)
            return 1;
        a=b;
        b=c; 
        if(c > N)
            return 0;                                          
    }

    return 0;
}