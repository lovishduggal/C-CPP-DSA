// Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, alp=0,dig=0,speChar=0;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
  
    for ( i = 0; str[i]; i++)
     {
         if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
         alp++;
         else if (str[i]>=48 && str[i]<=57)
         dig++;
         else 
         speChar++;
         
     }
     printf("The total Number of of alphabets, digits and special characters in a string are %d, %d and %d resp..",alp,dig,speChar);
    return 0;
}