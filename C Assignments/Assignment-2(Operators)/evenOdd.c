// Write a program to check whether the given number is even or odd using a bitwise
// operator.
#include <stdio.h>
int main()
{
  int x=4;
  if((x&1)==0)
  printf("The Given Number is Even Number");
  else
  printf("The Given Number is Odd Number");
  return 0;
}