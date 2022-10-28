// Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
  int x=10,y=20;
  y=y-x;
  x=y+x;
  printf("After Swaping x=%d and y=%d",x,y);
  return 0;
}