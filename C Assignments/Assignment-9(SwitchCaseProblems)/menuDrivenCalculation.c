// Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while (1)
    {
        printf("1.Addtion\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("choose any option: ");
        int x;
        scanf("%d",&x);
        switch (x)
        {
        case 1:
           {
            int a,b;
            printf("Enter Two Numbers:");
            scanf("%d%d",&a,&b);
            printf("The Addition is %d\n",a+b);
           }
            break;
        case 2:
           {
            int a,b;
            printf("Enter Two Numbers:");
            scanf("%d%d",&a,&b);
            printf("The Subtraction is %d\n",a-b);
           }
            break; 
        case 3:
           {
            int a,b;
            printf("Enter Two Numbers:");
            scanf("%d%d",&a,&b);
            printf("The Multilpication is %d\n",a*b);
           }
            break;
        case 4:
          {
            int a,b;
            printf("Enter Two Numbers:");
            scanf("%d%d",&a,&b);
            printf("The Division is %.2f\n",a/(b*0.1));
          }
          break;  
        case 5:
          exit(0);           
        
        default:
            break;
        }
    }
}
