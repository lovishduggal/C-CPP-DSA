// Define a function to input variable length string and store it in an array without
// memory wastage.
// or
// Input string without memory wastage.
#include<stdio.h>
#include<conio.h>
int main()
{
    char *str,c=0;
    int i=0,j=1;
    str=(char*)malloc(sizeof(char));
    printf("Enter your Name(string) :");
    while (c!='\n')
    {
        c=getchar();
        j++;
        str=(char*)realloc( str, j * sizeof(char));
        *(str+i)=c;
        i++;
    }
    *(str+i)='\0';
    str[strlen(str)-1]='\0';
    printf("The Input String is %s",str);
    free(str);
    return 0;
}