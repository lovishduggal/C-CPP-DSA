// Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int a,result;
    printf("Enter Number:");
    scanf("%d",&a);
    result=prime(a);
    if(result==1)
    printf("Enter Number is Prime.");
    else
    printf("Enter Number is not Prime.");
}
int prime(int a)
{
    int i;
    for ( i = 2; i <= a; i++)
    {
        if(a%i==0)
        break;
    }
    if(i==a)
    return 1;
    else
    return 0;
}