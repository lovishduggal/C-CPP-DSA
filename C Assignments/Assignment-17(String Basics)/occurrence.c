// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],character;
    int count=0;
    printf("Enter String :");
    fgets(str,100,stdin);
    printf("Enter Character:");
    scanf("%c",&character);
    str[strlen(str)-1]='\0';
    int i;
    for ( i = 0; str[i]; i++)
     {
         if(str[i]==character)count++;
     }
     printf("%c character appears %d times.",character,count);
    return 0;
}