// Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a Number:");
  scanf("%d",&x);
  if(x>99 && x<1000)
  printf("The Enter Number is three Digit Number.");
  else
   printf("The Enter Number is not three Digit Number.");
   return 0;
}