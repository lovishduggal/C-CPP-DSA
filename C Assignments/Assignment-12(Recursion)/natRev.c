// Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void rNat(int);
int main()
{
  int x;
  printf("Enter N:");
  scanf("%d",&x);
  rNat(x);
  return 0;
}
void rNat(int x)
{
    if(x>=1)
    {
        printf("%d ",x);
        rNat(x-1);
    }
}