#include<stdio.h>
#include<string.h>
int main()
{
   char ursNames[5][20]={"lovish","tania","rahul","vishal","akash"};
   char enterUserName[20];
   printf("Enter your Name:");
   fgets(enterUserName,20,stdin);
   enterUserName[strlen(enterUserName)-1]='\0';
   int i,N,s=1;
   for (i = 0; i < 5; i++)
   {
      if(strcmp(ursNames[i],enterUserName)==0)
        break;
   }

   if(i==5)
     printf("Enter user Name is not present");
   else
   {
     printf("Enter +ve Num in order to calculate Factorial:");
     scanf("%d",&N);
     for ( i = 1; i <= N; i++)
     {
       s*=i;
     }
     printf("The Fact of %d Number is %d",N,s);
   }
}