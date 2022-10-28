//  Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sumNat(int);
int main()
{
    int x,result;
    printf("Enter N:");
    scanf("%d",&x);
    result=sumNat(x);
    printf("The sum is %d",result);
    return 0;    
}
int sumNat(int x)
{
    if(x==1)
    return 1;
    return (x*x+sumNat(x-1));
}