// Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("1.Good\n");
    printf("2.Better\n");
    printf("3.Best\n");
    printf("4.Exit\n");
    printf("Choose any one in order to print on Screen:");
    scanf("%d",&x);
     switch (x)
    {
     case 1:
     printf("Good");
     break;
     case 2:
     printf("Better");
     break;
     case 3:
     printf("Best");
     break;
     case 4:
     exit(0);
     break;
    
     default:
     printf("Invalid!!");
     break;
    }
}