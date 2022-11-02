// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include<stdio.h>
#include<conio.h>
int main()
{
   int *arr,N,i=0,s=0;
   printf("Enter N (N means No. of Values you want to Enter):");
   scanf("%d",&N);
   arr=(int*)calloc(N,sizeof(int));
   if(arr==NULL)
   {
       printf("Memory allocation is failed!!");
       return 0;
   }
   printf("Enter %d Values:",N);
   for ( i=0; i < N;i++)
   {
       scanf("%d",arr+i);
   }

   for ( i = 0; i < N; i++)s+=*(arr+i);

   printf("The Avg of values is %d",s/N);
   free(arr);
   return 0;
}