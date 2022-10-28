// Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
void clean_stdin(void);
int main()
{  
    int i,j,N;
    char str[100][100],search[100];
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
   
    printf("Enter String for Searching:");
    fgets(search,100,stdin);
    search[strlen(search)-1]='\0';

    for ( i = 0; i < N; i++)
    {
       if(strcmp(str[i],search)==0)
       break;
    }
    if(i==N)
    printf("String is not found!!");
    else
    printf("String is found!!");

}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}