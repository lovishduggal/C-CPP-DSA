// Write a program to check whether a given number is an even number or an odd
// number without using % operator.
#include <stdio.h>
int main()
{
   int x;
  printf("Enter a Number:");
  scanf("%d",&x);
  if((x&1)==0)
  printf("The Given Number is Even Number");
  else
  printf("The Given Number is Odd Number");
  return 0;
}