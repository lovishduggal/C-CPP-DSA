// Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include<stdio.h>
#include<conio.h>
int main()
{
   int *arr,N,i=0;
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
   
   printf("The Value of Elements of Array is:");
   for ( i=0; i < N;i++)
   {
       printf("%d ",*(arr+i));
   }

   free(arr);
   return 0;
}