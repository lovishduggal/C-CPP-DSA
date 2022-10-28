// Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  printf("Enter String:");
  fgets(str,100,stdin);
  str[strlen(str)-1]='\0';
  char *p=str;
  int i,vow=0,cons=0;
  for ( i = 0; *(p+i); i++)
  {
     if(*(p+i)>='a' && *(p+i)<='z' || *(p+i)>='A' && *(p+i)<='Z')
     {
         if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
         vow++;
         else
         cons++;
     }
  }
  printf("The total Number of Vowels & Consonants is %d & %d resp..",vow,cons);
} 