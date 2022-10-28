// Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Even Num in order Convert into its upper nearest odd number: \n");
    scanf("%d",&x);
    switch (x%2==0)
    {
      case 1:
      printf("The Number is %d",x+1);
      break;
      case 0:
      printf("Please Enter Even Number!!");
    }
}