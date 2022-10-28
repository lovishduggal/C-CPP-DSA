// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter the amount in INR and get result in USD");
  scanf("%d",&x);
  printf("Amount in USD is %.2f",x/76.23);
  return 0;
}