// Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int a[100],n,i;
    printf("Enter Size of an array:");
    scanf("%d",&n);
    sort(a,n);
    for ( i = 0; i < n; i++)printf("%d",a[i]);
    return 0;
}
void sort(int a[],int n)
{
    int i,j,tmp;
    printf("Enter %d Elements:",n);
    for ( i = 0; i < n; i++)scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
              tmp=a[i];
              a[i]=a[j];
              a[j]=tmp;
            }
        }
        
    }
}