// Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter N in order to print that Times:");
    scanf("%d",&N);
    for ( i = N; i>=1; i--)printf("%d ",i);
}