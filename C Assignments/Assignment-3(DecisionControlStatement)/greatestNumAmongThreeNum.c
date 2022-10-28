// Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
  int x,y,z;
  printf("Enter First Number:");
  scanf("%d",&x);
  printf("Enter Second Number:");
  scanf("%d",&y);
  printf("Enter Third Number:");
  scanf("%d",&z);
  if(x>y)
  {
     if(x>z)
      printf("The Number is %d",x);
      else
      printf("The Number is %d",z);
  }
  else if(y>z)
   printf("The Number is %d",y);
  else
   printf("The Number is %d",z);
   return 0;
}