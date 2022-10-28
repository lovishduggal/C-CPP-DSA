// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter N in order to print that Times:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)printf("%d ",i*i);
}