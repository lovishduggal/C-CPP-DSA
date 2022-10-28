// Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n,i,j,num;
    printf("Enter size of an Array(both array have same size):");
    scanf("%d",&n);
    printf("Enter %d Elements for first Array:",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter %d Elements for second Array:",n);
    num=i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        c[num]=a[i];
        num++;
    }
    for ( i = 0; i < n*2; i++)
    {
        for ( j = i+1; j < n*2; j++)
        {
            if(c[i]<c[j])
            {
                num=c[j];
                c[j]=c[i];
                c[i]=num;
            }
        }
    }
    printf(" After merging two arrays of the same size sorted in descending order:");
    for ( i = 0; i < (n*2); i++)printf("%d ",c[i]);
}