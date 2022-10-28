// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
 char x;
 printf("Enter a character");
 scanf("%c",&x);
 if(x>='a' && x<='z')
 printf("Enter Character is in Lowercase");
 else
 printf("Enter Character is in Uppercase");
 return 0;
}