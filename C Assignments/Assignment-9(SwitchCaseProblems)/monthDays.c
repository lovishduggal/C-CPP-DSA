// Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Month Number in order to get days in that Month :");
    scanf("%d",&x);
    switch (x)
    {
     case 1:
     printf("There are 31 days in that Month");
     break;
     case 2:
     printf("There are 28 days in that Month");
     break;
     case 3:
     printf("There are 31 days in that Month");
     break;
     case 4:
     printf("There are 30 days in that Month");
     break;
     case 5:
     printf("There are 31 days in that Month");
     break;
     case 6:
     printf("There are 30 days in that Month");
     break;
     case 7:
     printf("There are 31 days in that Month");
     break;
     case 8:
     printf("There are 31 days in that Month");
     break;
     case 9:
     printf("There are 30 days in that Month");
     break;
     case 10:
     printf("There are 31 days in that Month");
     break;
     case 11:
     printf("There are 30 days in that Month");
     break;
     case 12:
     printf("There are 31 days in that Month");
     break;
    
     default:
     printf("Enter valid Month Number!!");
     break;
    }
}