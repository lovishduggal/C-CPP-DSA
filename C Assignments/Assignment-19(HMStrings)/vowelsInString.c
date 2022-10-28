// Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][100];
    printf("Enter 5 Strings :\n");
    int i,j,c=0,tmp[50];
    for ( i = 0; i < 5; i++)
    {
       printf("%d:",i+1); 
       fgets(str[i],100,stdin);
       str[i][strlen(str[i])-1]='\0';
    }
    for ( i = 0;i < 5; i++)
    {
       c=0;
      for ( j= 0; str[i][j]; j++)
      {
         if(str[i][j]=='a' || str[i][j]=='i' || str[i][j]=='o' ||str[i][j]=='e' || str[i][j]=='u')
         c++;
      }
       tmp[i]=c;
    }

   printf("Strings -> Contain Vowels\n");
   
   for (i = 0; i < 5; i++)
   {
         printf("%s",str[i]);
         printf(" -> ");
         printf("%d\n",tmp[i]);
   }
}