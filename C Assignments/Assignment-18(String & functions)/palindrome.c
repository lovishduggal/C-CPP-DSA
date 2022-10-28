// Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
char* strRev(char []);
int palDr(char[]);
int main()
{
    char str[100],result;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    result = palDr(str);
    if(result==1)
    printf("String is palindrome string.");
    else
    printf("String is Not palindrome string.");
    return 0;
}
int palDr(char str[])
{
    if(strcmp(str,strRev(str))==0)
    return 1;
    else
    return 0;
}
//In linux strrev is not working:
char* strRev(char str[])
{
   int i,j=strlen(str);
   char tmp[100];
   for ( i = 0;str[i]; i++)
   {
    j--;
    tmp[i]=str[j];
   }
    for ( i = 0;str[i]; i++)str[i]=tmp[i];
   return str;
}