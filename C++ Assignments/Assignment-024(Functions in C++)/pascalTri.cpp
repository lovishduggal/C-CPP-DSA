// Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
void pascalTriangle(int);
int factorial(int);
int main()
{
   int N;
   cout<<"Enter N";
   cin>>N;
   pascalTriangle(N);
   
   return 0;
}
void pascalTriangle(int N)
{
    int i,j;
    for ( i = 0; i <= N; i++)
    {
        for ( j = 0; j < (N-i); j++)printf(" ");

        for ( j = 0; j <= i; j++)
        {
            cout<<" "<<factorial(i) / (factorial(j) * factorial(i-j));
        }
        
        cout<<endl;
    }
}

int factorial(int n)
{
    if(n <= 0)
    {
        return 1;
    }
    int i,fact=1;
    for ( i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}