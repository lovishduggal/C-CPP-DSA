// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include<stdio.h>
int adj(int [],int);
int main()
{
    int a[100],result,N,i;
    printf("ENTER SIZE OF AN ARRAY:");
    scanf("%d",&N);
    result = adj(a,N);
   if(result==0)
    printf("There is no Adj Element in the Array");
   else
     printf("There is a Adj Element in the Array and value of Adj Element is %d",result);
    return 0;
}
int adj(int a[],int N)
{
    int i;
    printf("ENTER %d ELEMENTS:",N);
    for ( i = 0; i < N; i++)scanf("%d",&a[i]);
    for ( i = 0; i < (N-1); i++)
    {
      if(a[i]==a[i+1])
        return a[i];
    }
    return 0;
}