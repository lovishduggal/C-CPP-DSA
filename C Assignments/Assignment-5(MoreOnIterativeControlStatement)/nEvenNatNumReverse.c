// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,N,num;
    printf("Enter N in order to print that Times:");
    scanf("%d",&N);
    num=N*2;
    for ( i = 1; i <=N; i++)
    {
        printf("%d ",num);
        num=num-2;

    }  
}