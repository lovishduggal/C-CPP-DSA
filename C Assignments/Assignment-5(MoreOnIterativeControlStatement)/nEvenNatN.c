// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,N,num=2;
    printf("Enter N in order to print that Times:");
    scanf("%d",&N);
    for ( i = 1; i <=N; i++)
    {
        printf("%d ",num);
        num=num+2;

    }  
}