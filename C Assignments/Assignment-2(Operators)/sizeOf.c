// Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main()
{
  printf("%ld\n",sizeof(int));
  printf("%ld\n",sizeof(char));
  printf("%ld\n",sizeof(float));
  printf("%ld\n",sizeof(double));
  printf("%ld\n",sizeof(long double));
  return 0;
}