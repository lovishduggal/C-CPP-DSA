// Write a program to check whether two given numbers are co-prime
// numbers or not
#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter Two +ve Number in order to find Numbers are Co-Primes:");
    scanf("%d%d",&a,&b);
    for ( i = a<b?a:b; i>1; i--)
    {
        if(a%i==0 && b%i==0)
        break;
    }
    if(i==1)
    printf("Enter Numbers are Co-primes.");
    else
    printf("Enter Numbers are Not Co-primes.");
    return 0;
}