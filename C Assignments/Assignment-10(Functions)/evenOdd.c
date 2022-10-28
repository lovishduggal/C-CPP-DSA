// Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int evenOdd(int);
int main()
{
    int r,x;
    printf("Enter a Number:");
    scanf("%d",&x);
    r=evenOdd(x);
    if(r==1)
    printf("Enter Number is Even");
    else
    printf("Enter Number is Odd");
    return 0;
}
int evenOdd(int x)
{
  if(x%2==0)
  return 1;
  else
  return 0;
}