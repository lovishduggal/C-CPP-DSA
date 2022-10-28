// Write a program to print the elements of an array in reverse order.
#include<stdio.h>
int main()
{
  int a[100],N;
  printf("Enter Size of an Array:");
  scanf("%d",&N);
  printf("Enter %d value :",N);
  int i;
  for ( i = 0; i < N; i++)
  {
    scanf("%d",a+i);
  }
  for ( i =(N-1); i >= 0; i--)printf("%d ",*(a+i));
}