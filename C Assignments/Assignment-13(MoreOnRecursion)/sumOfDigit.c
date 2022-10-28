// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
long int sOfDig(long int);
int main()
{
    long int x,result;
    printf("Enter Number:");
    scanf("%ld",&x);
    result = sOfDig(x);
    printf("The sum of Digits is %ld",result);
    return 0;
}
long int sOfDig(long int x)
{
    if(x==0)
    return 0;
    return (x%10+sOfDig(x/10));
}
