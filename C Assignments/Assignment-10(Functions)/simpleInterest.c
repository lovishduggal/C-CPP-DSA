// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float interest(int,int,int);
int main()
{
    int p,r,t;
    float result;
    printf("Enter Principle:");
    scanf("%d",&p);
    printf("Enter Rate:");
    scanf("%d",&r);
    printf("Enter Time:");
    scanf("%d",&t);
    result=interest(p,r,t);
    printf("The Simple Interest is %.2f",result);
    return 0;
}
float interest(int p,int r,int t)
{
    float simpleInterest;
    simpleInterest=(p*r*t)/100;
    return simpleInterest;
}
