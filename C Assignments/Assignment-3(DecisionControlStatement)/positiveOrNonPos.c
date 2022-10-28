// Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a Number:");
  scanf("%d",&x);
  if(x>0)
  printf("The Enter Number is postive.");
  else
  printf("The Enter Number is Non-postive.");
  return 0;
}