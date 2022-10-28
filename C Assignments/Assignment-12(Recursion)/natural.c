// Write a recursive function to print first N natural numbers
#include<stdio.h>
void nat(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    nat(x);
    return 0;
}
void nat(int x)
{
    if(x>=1)
    {
        nat(x-1);
        printf("%d ",x);
    }
}