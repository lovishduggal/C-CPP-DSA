// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int pw(int,int,int);
int main()
{
    int x,power,s=1,result;
    printf("Enter Number:");
    scanf("%d",&x);
    printf("Enter Power:");
    scanf("%d",&power);
    result =pw(x,power,s);
    printf("If power of %d is %d then result is %d",x,power,result);
    return 0;
}
int pw(int x,int power,int s)
{
    if(power==0)
    return s;
    s*=x;
    return pw(x,(power-1),s);
}