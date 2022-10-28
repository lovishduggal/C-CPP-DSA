// Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
#include<string.h>
int alpNum(char[]);
int main()
{
    char str[100],result;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    result = alpNum(str);
    if(result==1)
    printf("String is alphanumeric string.");
    else
    printf("String is Not alphanumeric string.");
    return 0;
}
int alpNum(char str[])
{
    int i,alpCoubt=0,digCount=0;
    for ( i = 0; str[i]; i++)
    {
         if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
         alpCoubt++;
         else if (str[i]>=48 && str[i]<=57)
         digCount++;
    }
    if(alpCoubt >0 && digCount>0)
    return 1;
    else
    return 0;
}