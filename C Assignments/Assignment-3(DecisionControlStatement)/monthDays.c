// Write a program which takes the month number as an input and display number of
// days in that month
#include <stdio.h>
int main()
{
 int x;
 printf("Enter a Month Number");
 scanf("%d",&x);
 if(x==1 || x==3 || x==5 || x==7 || x==8 || x==9 || x==11 )
 printf("Month have 31 Days.");
 else if(x==4 || x==6 || x==10 || x==12  )
 printf("Month have 30 Days.");
 else if(x==2)
 printf("Month have 29 Days.");
 else
 printf("Enter Valid Month Number.");
 return 0;
}