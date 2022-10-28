// Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>
int main()
{
 int x,y,z;
  printf("Enter length of First-Side:");
  scanf("%d",&x);
  printf("Enter length of Second-Side:");
  scanf("%d",&y);
  printf("Enter length of Third-Side:");
  scanf("%d",&z);
  if(x+y>z && y+z>x && x+z>y)
   printf("Triangle is Valid");
  else
   printf("Triangle is Not Valid");
   return 0;
}