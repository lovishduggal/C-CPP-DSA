// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],tmp[100];
    int count=0;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int i,j=0;
    for ( i=0; str[i]; i++)
    {
        tmp[j]=str[i];
        j++;
    }
    printf("The String is %s",tmp);
    return 0;
}