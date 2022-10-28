// Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void oddNatural(int);
int main()
{
    int x;
    printf("Enter N:");
    scanf("%d",&x);
    oddNatural(x);
    return 0;
}
void oddNatural(int x)
{
    int i;
    for ( i = 1; i <= x*2; i=i+2)printf("%d ",i);
}