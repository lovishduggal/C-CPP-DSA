// Write a program in C to Find the Frequency of Characters.
#include <stdio.h>    
#include <string.h>    
  
int main()    
{  
    char a[100],frq[100];
    int i,j,flag=-1,c;
    printf("Enter String:");
    fgets(a,100,stdin);
    a[strlen(a)-1]='\0';

    for ( i = 0; a[i]; i++)
    {
         if(a[i]==flag)
         flag--;
    }
        
    for ( i = 0; a[i]; i++)
    {
        c=1;
       for ( j = i+1; j < strlen(a); j++)
       {  
        
         if(a[i]==a[j])
         {
            c++;
            a[j]=flag;
         }
       }
       if(a[i]!=flag)
       frq[i]=c;
    }

     for ( i = 0; a[i]; i++)
     {
        if(a[i]!=flag)
        {
             printf("Frequency of %c",a[i]);
             printf(" -> ");
             printf("%d",frq[i]);
             printf("\n");
        }
    }
    return 0;
}    
