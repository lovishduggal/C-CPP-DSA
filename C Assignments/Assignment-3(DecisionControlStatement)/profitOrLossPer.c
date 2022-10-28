// Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
  int sp,cp;
  printf("Enter Selling Price  of the Product");
  scanf("%d",&sp);
  printf("Enter Cost Price  of the Product");
  scanf("%d",&cp);
  if(sp>cp)
  {
    printf("Profit %% is %.2f",((sp-cp)/(cp*1.0))*100);
  }
  else if(sp==cp)
  printf("Selling Price and Cost Price are same");
  else
  printf("Loss %% is %.2f",((cp-sp)/(cp*1.0))*100);
  return 0;
}