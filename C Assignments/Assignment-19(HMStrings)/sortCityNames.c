// Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][100],tmp[100];
    printf("Enter 10  City Names :\n");
    int i,j,c=0;
    for ( i = 0; i < 10; i++)
    {
       printf("%d:",i+1); 
       fgets(str[i],100,stdin);
       str[i][strlen(str[i])-1]='\0';
    }
    for ( i = 0;i < 10; i++)
    {
       
      for ( j= i+1;j < 10; j++)
      {
          if(str[i][0]>str[j][0])
          {
             strcpy(tmp,str[j]);
             strcpy(str[j],str[i]);
             strcpy(str[i],tmp);
          }
      }
     
    }

   printf("After Sorting :\n");
   for (i = 0; i < 10; i++)printf("%d:%s\n",i+1,str[i]);
    
}