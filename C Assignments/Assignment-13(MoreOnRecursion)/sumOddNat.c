// Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sumOddNat(int);
int main()
{
    int x,result;
    printf("Enter N:");
    scanf("%d",&x);
    result=sumOddNat(x);
    printf("The sum is %d",result);
    return 0;    
}
int sumOddNat(int x)
{
    if(x==1)
    return 1;
    return ((x*2-1)+sumOddNat(x-1));
}