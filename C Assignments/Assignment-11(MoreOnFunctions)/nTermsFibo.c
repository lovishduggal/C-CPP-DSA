// Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void nFibo(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    nFibo(x); 
    return 0;
}
void nFibo(int N)
{
   int a=-1,b=1,c,i;
    for ( i = 1; i <=N; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}