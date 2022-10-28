// Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void oddNat( int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    oddNat(x);
    return 0;
}
void oddNat( int x)
{
    if(x>=1)
    {
        oddNat(x-1);
        printf("%d ",((x*2)-1));
    }
}