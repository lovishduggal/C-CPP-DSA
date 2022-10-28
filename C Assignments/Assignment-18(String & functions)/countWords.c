// Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
int cWords(char[]);
int main()
{
    char str[100],result;
    printf("Enter String :");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    result = cWords(str);
    printf("There are %d words in String",result);
    return 0;
}
int cWords(char str[])
{
   int i,c=0;
  for ( i = 0;str[i]; i++)
  {
      if(str[i]==32 && (str[i+1]>='a' && str[i+1]<='z' || str[i+1]>='A' && str[i+1]<='Z') && i>0)
      c++;
  }
  return c;
}