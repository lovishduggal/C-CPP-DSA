// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter Two Numbers:");
  scanf("%d%d",&a,&b);
  int *p=&a,*q=&b;
  printf("The Max Num is %d",*p>*q?*p:*q);
}  