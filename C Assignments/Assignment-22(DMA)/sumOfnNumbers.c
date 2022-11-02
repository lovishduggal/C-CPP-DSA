// Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include<stdio.h>
#include<conio.h>
int main()
{
   int *arr,N,i=0,s=0;
   printf("Enter N (N means No. of Values you want to Enter):");
   scanf("%d",&N);
   arr=(int*)malloc(N * sizeof(int));
   if(arr==NULL)
   {
     printf("Memory allocation is failed!!");
     return 0;
   }
   printf("Enter %d Values:",N);
   for ( i = 0; i < N; i++)
   {
     scanf("%d",arr+i);
   }
  
   for ( i = 0; i < N; i++)s+=*(arr+i);

   printf("The sum of values is %d",s);
   free(arr);
   return 0;
}