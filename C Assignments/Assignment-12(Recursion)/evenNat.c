// Write a recursive function to print first N even natural numbers
#include<stdio.h>
void evenNat( int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    evenNat(x);
    return 0;
}
void evenNat( int x)
{
    if(x>=1)
    {
        evenNat(x-1);
        printf("%d ",(x*2));
    }
}