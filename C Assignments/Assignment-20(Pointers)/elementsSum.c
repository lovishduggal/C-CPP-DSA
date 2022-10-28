// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int main()
{
  int a[100],N;
  printf("Enter Size of an Array:");
  scanf("%d",&N);
  printf("Enter %d value :",N);
  int i,s=0;
  for ( i = 0; i < N; i++)
  {
    scanf("%d",a+i);
    s+=*(a+i);
  }
  printf("The sum of all Elements is %d",s);
}