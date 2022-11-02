// Write a program to demonstrate memory leak in C.
#include<stdio.h>
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    free(ptr);
    *ptr=5; /* ptr becomes dangling pointer which points that memory location which is not reserve by us and here we store 5 */
    return 0;
}
