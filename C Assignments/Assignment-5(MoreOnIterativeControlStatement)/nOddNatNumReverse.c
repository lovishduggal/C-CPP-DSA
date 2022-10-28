// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter N in order to print that Times:");
    scanf("%d",&N);
    int num=(N*2)-1;
    for ( i = 1; i <=N; i++)
    {
        printf("%d ",num);
        num=num-2;

    }  
}