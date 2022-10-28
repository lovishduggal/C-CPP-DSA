// Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
  int x=4,c=0;
  c++;
  if(x&1==1)
  printf("%d",c);
  else
  x=x>>1;
  c++;
  if(x&1==1)
  printf("%d",c);
  else
  x=x>>1;
  c++;
  if(x&1==1)
  printf("%d",c);
  else
  x=x>>1;
  return 0;
}