// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int*,int);
int main()
{
  int a[100],N;
  printf("Enter Size of an Array:");
  scanf("%d",&N);
  printf("Enter %d value :",N);
  int i;
  for ( i = 0; i < N; i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,N);
  printf("After Sorting :");
  for( i = 0; i<N; i++)printf("%d ",a[i]);
  
}
void sort(int *p,int N)
{
    int i,j,tmp;
   for ( i = 0; i < N; i++)
   {
        for ( j = i+1; j < N;j++)
        {
            if(*(p+i)>*(p+j))
             {
                tmp=*(p+i);
               *(p+i)=p[j];
               *(p+j)=tmp;
             }
        }
   }
}