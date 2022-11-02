// Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<conio.h>
int main()
{
  int *arr,N,s=0,i;
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
     scanf("%d",arr+i);
     s+=*(arr+i);
  }
  printf("The sum is %d",s);
  free(arr);
  return 0;
}