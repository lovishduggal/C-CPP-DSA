// Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter String in order to convert into uppercase :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int i;
    for ( i = 0; str[i]; i++)
     {
         if(str[i]>='a' && str[i]<='z')str[i]=str[i]-32;
     }
     printf("The string is %s",str);
    return 0;
}