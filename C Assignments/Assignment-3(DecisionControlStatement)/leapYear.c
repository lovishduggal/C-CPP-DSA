// Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
  int x;
  printf("Enter a Year:");
  scanf("%d",&x);
  if(x%4==0)
  {
    if(x%100==0)
    {
        if(x%400==0)
         printf("Enter Year is Leap Year");
        else
         printf("Enter Year is Not Leap Year");
    }
    else
     printf("Enter Year is Leap Year");
  }
  else
   printf("Enter Year is Not Leap Year");
   return 0;
}