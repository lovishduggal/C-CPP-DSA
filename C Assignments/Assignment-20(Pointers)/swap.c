// Write a function to swap values of two in variables of calling function. (TSRN)
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter Value of a:");
    scanf("%d",&a);
    printf("Enter Value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After Swaping the value of a=%d & b=%d",a,b);
}
void swap(int *p,int *q)
{
    int tmp;
    tmp=*p;
    *p=*q;
    *q=tmp;
}