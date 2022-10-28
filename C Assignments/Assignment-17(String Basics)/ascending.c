// Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    int i,j,tmp;
    for ( i = 0; str[i]; i++)
     {
         for ( j = i+1;j < strlen(str); j++)
         {
            if(str[i]>str[j])
            {
                tmp=str[i];
                str[i]=str[j];
                str[j]=tmp;
            }
         }
         
     }
     printf("After Sorting : %s",str);
    return 0;
}