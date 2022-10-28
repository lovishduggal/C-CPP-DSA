// Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include <stdio.h>
int main()
{
  int a,b,c,d;
printf("Note:Remember a!=0\n");
printf("Enter value of a, b & c\n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
printf("Roots are Unequal, real and rational");
else if(d<0)
printf("Roots are Unequal and Imaginary");
else
printf("Roots are equal");
return 0;
}