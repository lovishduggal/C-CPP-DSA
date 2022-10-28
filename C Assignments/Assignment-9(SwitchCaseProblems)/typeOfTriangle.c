// Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
 while(1)
 {
    int a,b,c,r;
  printf("Enter three sides of triangle:");
  scanf("%d%d%d",&a,&b,&c);
  r=(a+b>c && a+c>b && b+c>a);
  switch (a+b>c && a+c>b && b+c>a)
   {
     case 0:
       printf("Enter Sides does not form a Triangle...");
       break;
     case 1:
     {
       printf("1.Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
       printf("2.Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
       printf("3.Check whether a given set of three numbers are equilateral triangle or not\n");
       printf("4.Exit\n");
       printf("choose any option :");
       int x,result;
       scanf("%d",&x);
       switch (x)
       {
       case 1: 
        {
            result = (a==b || b==c || c==a);
            switch (result)
            {
              case  0:
                printf("Enter Sides does not form  isosceles Triangle\n");
                break;
              case  1:
                printf("Enter Sides  form  isosceles Triangle\n");
                break;    
            }
        }
       break;

       case 2: 
        {
            result = (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b);
            switch (result)
            {
              case  0:
                printf("Enter Sides does not right angled triangle\n");
                break;
              case  1:
                printf("Enter Sides  form  right angled triangle\n");
                break;    
            }
        } 
       break;

       case 3: 
        {
            result = (a==b==c);
            switch (result)
            {
              case  0:
                printf("Enter Sides does not equilateral triangle\n");
                break;
              case  1:
                printf("Enter Sides  form  equilateral triangle\n");
                break;    
            }
        } 
       break;

       case 4:
       exit(0);
       }
    } 
     break; 
  }
 }
}