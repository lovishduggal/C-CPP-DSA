// Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print that email.
#include<stdio.h>
#include<string.h>
void clean_stdin(void);
int main()
{  
    int i,j,N,check=1;
    char str[100][100];
    printf("NOTE--> N means number of Strings you want to Enter!!\n");
    printf("Enter N:");
    scanf("%d",&N);
    fflush(stdin);
    for ( i = 0; i < N; i++)
    {
       printf("%d.",i+1);
       fgets(str[i],100,stdin);
       str[i][strlen(str[i])-1]='\0';
    }
   
    for ( i = 0; i < N; i++)
    {
        if(strchr(str[i],'@')!=0)
        {
            if(check)
            printf("The Emails  which contains @:\n");
            printf("%s\n",str[i]);
            check=0;
        }
    }
}
