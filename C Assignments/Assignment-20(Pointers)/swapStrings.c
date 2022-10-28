// Write a function to swap strings of two char arrays of calling functions. (TSRN)
#include<stdio.h>
#include<string.h>
void swap(char*,char*);
int main()
{
    char s1[100],s2[100];
    printf("Enter First String:");
    fgets(s1,100,stdin);
    s1[strlen(s1)-1]='\0';
    printf("Enter Second String:");
    fgets(s2,100,stdin);
    s2[strlen(s2)-1]='\0';
    swap(s1,s2);
    printf("After Swaping the String s1=\"%s\" & s2=\"%s\"",s1,s2);
}
void swap(char *p,char *q)
{
    char tmp[100];
    strcpy(tmp,p);
    strcpy(p,q);
    strcpy(q,tmp);
}
