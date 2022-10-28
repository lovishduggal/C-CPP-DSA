// Write a function to calculate length of the string
#include<stdio.h>
int strLen(char[]);
int main()
{
    char str[100],result;
    printf("Enter String :");
    fgets(str,100,stdin);
    result = strLen(str);
    printf("The length of String is %d",result);
    return 0;
}
int strLen(char str[])
{
   int i;
   for ( i = 0;str[i]; i++);
   return (i-1);
   
}