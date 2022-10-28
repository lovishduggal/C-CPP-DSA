// Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int x,num;
    printf("1.Postive Number into Negative Number\n");
    printf("2.Negative Number into Postive Number\n");
    printf("Enter your choose\n");
    scanf("%d",&x);
    switch (x)
    {
      case 1:
      printf("Enter Positive Number: ");
      scanf("%d",&num);
      printf("The Number is %d",-num);
      break;
      case 2:
      printf("Enter Negative Number: ");
      scanf("%d",&num);
      printf("The Number is %d",-num);
      break;
    }
}