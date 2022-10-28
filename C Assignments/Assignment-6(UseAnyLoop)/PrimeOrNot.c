// Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a Number in order to check it is Prime or Not:");
    scanf("%d",&N);
    for ( i = 2; i < N; i++)
    {
        if(N%i==0)
        break;
    }
    if(i==N)
    printf("Enter Number is Prime Number.");
    else
    printf("Enter Number is not Prime Number.");
    return 0;
}