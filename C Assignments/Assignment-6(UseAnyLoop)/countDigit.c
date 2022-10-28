// Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i,N,c=0;
    printf("Enter Number in order to calculate Digits in that Number:");
    scanf("%d",&N);
    while(N!=0)
    {
     N=N/10;
     c++;
    }
    printf(" Entered Number having Number of Digits is %d",c);
    return 0;
}