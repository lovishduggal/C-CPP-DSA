// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
  int x=10,y=20,z=x;
  x=y;
  y=z;
  printf("After Swaping x=%d and y=%d",x,y);
  return 0;
}