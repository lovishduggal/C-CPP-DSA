//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
 char x;
 printf("Enter a character");
 scanf("%c",&x);
 if(x>='a' && x<='z')
 printf("Enter Character is in Lowercase");
 else if(x>='A' && x<='Z')
 printf("Enter Character is in Uppercase");
 else 
 printf("Enter Character is a special character");
 return 0;
}