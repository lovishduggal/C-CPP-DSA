// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,N,s=0,o=1;
    printf("Enter N in order to sum up:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        s+=o;
        o=o+2;
    }
    printf("%d ",s);
    return 0;
}