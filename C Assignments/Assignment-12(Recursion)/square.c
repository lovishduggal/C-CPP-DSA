// Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void nat(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    nat(x);
}
void nat(int x)
{
    if(x>=1)
    {
        nat(x-1);
        printf("%d ",x*x);
    }
}