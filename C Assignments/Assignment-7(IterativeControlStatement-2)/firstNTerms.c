// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c,i;
    printf("Enter N:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;    
}