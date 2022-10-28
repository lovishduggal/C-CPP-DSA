// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
void clean_stdin(void);
int main()
{  
    int i,j,N;
    char str[100][100];
    printf("NOTE--> N means number of Strings you want to Enter!!\n");
    printf("Enter N :");
    scanf("%d",&N);
    clean_stdin();
    for ( i = 0; i < N; i++)
    {
       printf("%d.",i+1);
       fgets(str[i],100,stdin);
       str[i][strlen(str[i])-1]='\0';
    }
   
    printf("Displaying 2D Array:\n");
    for ( i = 0; i < N; i++)
    {
      printf("%d.",i+1);
      printf("%s",str[i]);
      printf("\n");
    }
}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}