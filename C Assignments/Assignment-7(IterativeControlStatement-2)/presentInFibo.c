// Write a program to check whether a given number is there in the Fibonacci
// series or not.
#include<stdio.h>
int main()
{
    int N,a=-1,b=1,c,i;
    printf("Enter Number in order to check:");
    scanf("%d",&N);
    for ( i = 0; i < N+2; i++)
    {
        c=a+b;
        if(c==N)
        {
         printf("Enter Number is present in Fibonacci Series");
         break;
        }
        a=b;
        b=c;
    }
    if(i==N+2)
     printf("Enter Number is Not present in Fibonacci Series");
    return 0;    
}