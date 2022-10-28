// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
char* strRev(char[]);
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    strRev(str);
    printf("The length of String is %s",str);
    return 0;
}
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