// Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    int i;
    for ( i = 0; str[i]; i++);
    printf("The Length of String is %d",i-1);
    return 0;
}