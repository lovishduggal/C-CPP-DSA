// Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sumEvenNat(int);
int main()
{
    int x,result;
    printf("Enter N:");
    scanf("%d",&x);
    result=sumEvenNat(x);
    printf("The sum is %d",result);
    return 0;    
}
int sumEvenNat(int x)
{
    if(x==1)
    return 2;
    return ((x*2)+sumEvenNat(x-1));
}