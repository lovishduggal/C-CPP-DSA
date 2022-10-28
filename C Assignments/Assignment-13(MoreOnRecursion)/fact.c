// Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int);
int main()
{
    int x,result;
    printf("Enter Number:");
    scanf("%d",&x);
    result= fact(x);
    printf("The factorial is %d",result);
    return 0;
}
int fact(int x)
{
    if(x==1)
    return 1;
    return x*fact(x-1);
}