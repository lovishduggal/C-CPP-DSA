// Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int adj(int [],int);
int main()
{
    int a[100],result,N,i;
    printf("ENTER SIZE OF AN ARRAY:");
    scanf("%d",&N);
    result = adj(a,N);
   if(result==0)
    printf("There is no dulplicate  Element in the Array");
   else
     printf("The total Number of Duplicate Elements is %d",result);
    return 0;
}
int adj(int a[],int N)
{
    int i,j,c=0;
    printf("ENTER %d ELEMENTS:",N);
    for ( i = 0; i < N; i++)scanf("%d",&a[i]);
    for ( i = 0; i < (N-1); i++)
    {
         for ( j = i+1; j < N; j++)
         {
            if(a[i]==a[j])
            {
              c++;
              break;
            } 
         }
    }
     return c;
}