// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
  int x,s=0;
  printf("Enter a three digit Number:\n");
  scanf("%d",&x);
  s+=x%10;
  x=x/10;
  s+=x%10;
  x=x/10;
  s+=x%10;
  printf("The Sum is %d",s);
  return 0;
}