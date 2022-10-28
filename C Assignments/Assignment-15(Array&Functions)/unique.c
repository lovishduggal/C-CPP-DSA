// Write a function in C to print all unique elements in an array.
#include<stdio.h>
void unq(int [],int);
int main()
{
    int a[100],N,i;
    printf("ENTER SIZE OF AN ARRAY:");
    scanf("%d",&N);
    unq(a,N);
    return 0;
}
void unq(int a[],int N)
{
    int i,j,k,b[100],loop=0,c,check=1,q=0;
    printf("ENTER %d ELEMENTS:",N);
    for ( i = 0; i < N; i++)scanf("%d",&a[i]);
    
    for ( i = 0; i < N; i++)
    {
         for ( j = i+1; j < N; j++)
         {
            if(a[i]==a[j])
              {
                b[q]=a[i];
                loop++;
                q++;
                break;
              }
         }
            c=0;
         for ( k = 0; k < loop; k++)
         {
            if(b[k]==a[i])
            c++;
         }
          if(!c)
          {
            check=0;
            printf("%d ",a[i]);
          }
    }
    if(check)
    printf("There is no Unique Element.");
}