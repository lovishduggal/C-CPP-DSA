// Write a program to print greater between two numbers. Print one number of both are
// the same.
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter First Number:");
  scanf("%d",&x);
  printf("Enter Second Number:");
  scanf("%d",&y);
  if(x>y)
   printf("The Number is %d",x);
  else
   printf("The Number is %d",y);
   return 0;
}