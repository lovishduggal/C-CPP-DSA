// Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
 int x;
 printf("Enter a Number:");
 scanf("%d",&x);
 if(x>0)
 printf("Enter Number is Positive");
 else if(x<0)
 printf("Enter Number is Negative"); 
 else
 printf("Enter Number is Zero"); 
 return 0;
 
}