// Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter N in order to print Table of that Number:");
    scanf("%d",&N);
    for ( i = 1; i<=10; i++)printf("%d * i = %d\n",N,N*i);
    
}