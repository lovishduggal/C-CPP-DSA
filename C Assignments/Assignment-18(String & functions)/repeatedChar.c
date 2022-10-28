// Write a function to find the repeated character in a given string.
#include<stdio.h>
#include<string.h>
char* rCh(char[]);
int main()
{
    char str[100],result;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    rCh(str);
    printf(" The repeated character are %s",str);
    return 0;
}
char* rCh(char str[])
{
    char tmp[100];
    int i,j,k=0,c;
    for ( i = 0; str[i]; i++)
    {
         if(str[i]==32)
         continue;
          c=0;
        for(j=i+1; j < strlen(str);j++)
        {
             if(str[i]==str[j])
             {
                str[j]=-1;
                c=1;
             }   
        }
        
        if(str[i]!=-1 && c)
        {
            tmp[k]=str[i];
            k++;
        }
    }
    strcpy(str,tmp);
    return str;
}