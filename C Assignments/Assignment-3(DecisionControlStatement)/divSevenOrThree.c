// Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
 int x;
 printf("Enter a Number:");
 scanf("%d",&x);
 if(x%3==0)
 printf("Enter Number is divisible by 3");
 else if(x%7==0)
 printf("Enter Number is not divisible by 7"); 
 else
 printf("Enter Number is not divisible by 3 and 7"); 
 return 0;
}