// Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
void clean_stdin(void);
char* strRev(char[]);
int main()
{  
    int i,j,N,check=1;
    char str[100][100],temp[100];
    printf("NOTE--> N means number of Strings you want to Enter!!\n");
    printf("Enter N:");
    scanf("%d",&N);
    clean_stdin();
    for ( i = 0; i < N; i++)
    {
       printf("%d.",i+1);
       fgets(str[i],100,stdin);
       str[i][strlen(str[i])-1]='\0';
    }
   
    for ( i = 0; i < N; i++)
    {
        strcpy(temp,str[i]);
        if(strcmp(str[i],strRev(temp))==0)
        {
            if(check)
            printf("The Palindrome Strings are:\n");
            printf("%s\n",str[i]);
            check=0;
        }
    }
}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
char* strRev(char str[])
{
   int i,j=strlen(str);
   char tmp[100];
   for ( i = 0;str[i]; i++)
   {
    j--;
    tmp[i]=str[j];
   }
    for ( i = 0;str[i]; i++)str[i]=tmp[i];
   return str;
}