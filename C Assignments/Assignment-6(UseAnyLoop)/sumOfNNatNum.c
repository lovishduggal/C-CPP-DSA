// Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,N,s=0;
    printf("Enter N in order to sum up:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)s+=i;
    printf("%d ",s);
    return 0;
}