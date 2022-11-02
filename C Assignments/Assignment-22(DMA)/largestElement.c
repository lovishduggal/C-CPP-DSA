// Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<conio.h>
int main()
{
  int *arr,N,s=0,i,lEle;
  printf("Enter No. of value you want to Enter:");
  scanf("%d",&N);
  arr=(int*)calloc(N,sizeof(int));
  if(arr==NULL)
  {
      printf("Memory allocation is failed!!");
      return 0;
  }
  printf("Enter Value of %d elements",N);
  for (i = 0; i < N; i++)
  {
     scanf("%d",&*(arr+i));
  }
  
  lEle=*(arr+0);
  for (i = 0; i < N; i++)
  {
     if(lEle<*(arr+i))
       lEle=*(arr+i);
  }
  printf("The Largest Element is %d",lEle);
  free(arr);
  return 0;
}