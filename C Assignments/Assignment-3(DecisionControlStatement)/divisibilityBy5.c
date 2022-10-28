// Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a Number:");
  scanf("%d",&x);
  if(x%5==0)
  printf("The Enter Number is divisible by 5");
  else
  printf("The Enter Number is not divisible by 5");
  return 0;
}