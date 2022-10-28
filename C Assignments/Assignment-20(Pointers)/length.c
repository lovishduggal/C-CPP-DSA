// Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int main()
{
  char str[100];
  printf("Enter String:");
  fgets(str,100,stdin);
  char *p=str;
  int i;
  for ( i = 0; *(p+i); i++);
  printf("The Length of String is %d",i-1);
} 