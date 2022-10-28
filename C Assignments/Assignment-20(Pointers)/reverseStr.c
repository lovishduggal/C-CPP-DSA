// Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter String:");
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]='\0';
    int i;
    for ( i =strlen(s1); i>=0; i--)printf("%c",*(s1+i));
}