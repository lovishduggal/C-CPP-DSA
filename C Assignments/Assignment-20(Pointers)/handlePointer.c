// Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
  int a=1;
  int *p=&a;
  printf("\nThe value of a is %d\n",a);
  printf("When a is %d the address which is contain by Pointer Variable p is %p\n",a,p);


//   when a=2
 a=2;
 p=&a;
 printf("\nThe value of a is %d\n",a);
  printf("When a is %d the address which is contain by Pointer Variable p is %p\n",a,p);


//When a=3
 a=3 ;
 p=&a;
 printf("\nThe value of a is %d\n",a);
 printf("When a is %d the address which is contain by Pointer Variable p is %p\n",a,p);
}