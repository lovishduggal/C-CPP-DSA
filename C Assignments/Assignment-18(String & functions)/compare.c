// Write a function to compare two strings.
#include<stdio.h>
#include<string.h>
int strCmp(char[],char[]);
int main()
{
 char s1[100],s2[100];
 printf("Enter 1st String:");
 fgets(s1,100,stdin);
 printf("Enter second String then we able to compare with first string:");
 fgets(s2,100,stdin);
 s1[strlen(s1)-1]='\0';
 s2[strlen(s2)-1]='\0';
 int result;
 result= strCmp(s1,s2);
 if(result==1)
 printf("String are opposite of Distionary order.");
 else if(result==-1)
 printf("String are in Distionary order.");
 else
 printf("String are Equal.");
 return 0;
}
int strCmp(char s1[],char s2[])
{
    int i, equal=1;
    if (strlen(s1)>strlen(s2))
     return 1;
    else if (strlen(s1)<strlen(s2))
     return -1;
    else
    {
        for ( i = 0;s1[i]; i++)
       {
          if(s1[i]>s2[i])
          return 1;
          else if(s1[i]==s2[i])
          {
           if(equal==strlen(s1))
            return 0;
            equal++;
          }
          else
            return -1;
        }
    }
}
