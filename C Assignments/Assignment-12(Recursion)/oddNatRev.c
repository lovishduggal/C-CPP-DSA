// Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void oddNatRev( int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    oddNatRev(x);
    return 0;
}
void oddNatRev( int x)
{
    if(x>=1)
    {
        printf("%d ",((x*2)-1));
        oddNatRev(x-1);
    }
}