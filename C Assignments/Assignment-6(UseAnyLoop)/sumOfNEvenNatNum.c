// Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,N,s=0,e=2;
    printf("Enter N in order to sum up:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        s+=e;
        e=e+2;
    }
    printf("%d ",s);
    return 0;
}