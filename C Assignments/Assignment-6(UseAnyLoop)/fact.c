// Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
     int i,N,s=1;
    printf("Enter N in order to find factorial of that Number:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
    s*=i;
    }
    printf("%d ",s);
    return 0;
}