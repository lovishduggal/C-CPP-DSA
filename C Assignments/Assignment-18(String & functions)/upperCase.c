// Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
char* strUpr(char[]);
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    strUpr(str);
    printf(" The String is %s",str);
    return 0;
}
char* strUpr(char str[])
{
    int i;
    for ( i = 0; str[i]; i++)
    {
       if(str[i]>='a' && str[i]<='z')str[i]=str[i]-32;
    }
    return str;
}