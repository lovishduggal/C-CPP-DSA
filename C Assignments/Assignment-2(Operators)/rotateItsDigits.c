// Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a three digit Number:");
  scanf("%d",&x);
  x=(x%10)*100+(x/10);
  printf("The Number Obtained after rotating is %d",x);
  return 0;
}