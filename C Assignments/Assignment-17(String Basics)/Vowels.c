// Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int i;
    for ( i = 0; str[i]; i++)
     {
         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u')count++;
     }
     printf("The total Number of vowels in String are %d.",count);
    return 0;
}