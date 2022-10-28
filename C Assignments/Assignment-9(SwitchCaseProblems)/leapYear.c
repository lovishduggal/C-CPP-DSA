// Program to check whether a year is a leap year or not. Using switch
// statement
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Year:");
    scanf("%d",&x);
    switch (x%4==0)
    {
    case 0:
        printf("Enter Year is not a Leap Year");
        break;
    case 1:
     {
        switch (x%100==0)
        {
          case 0:
            printf("Enter Year is Leap Year");
            break;
          case 1:
            {
               switch (x%400==0)
               {
                 case 0:
                  printf("Enter Year is not a Leap Year");
                  break;
                 
                 case 1:
                  printf("Enter Year is Leap Year");
                  break;
               }
            }
             break;
        }
     }
      break;
    }
}