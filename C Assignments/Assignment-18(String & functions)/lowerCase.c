// Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
char* strLwr(char[]);
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    strLwr(str);
    printf("The String is %s",str);
    return 0;
}
char* strLwr(char str[])
{
    int i;
    for ( i = 0; str[i]; i++)
    {
       if(str[i]>='A' && str[i]<='Z')str[i]=str[i]+32;
    }
    return str;
}