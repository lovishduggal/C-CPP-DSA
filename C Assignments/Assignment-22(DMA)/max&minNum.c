// Find out the maximum and minimum from an array using dynamic memory allocation
// in C.
#include<stdio.h>
int main()
{
    int *arr,N,i,greatNum,minNum;

    printf("Enter Number of Elements you want to enter:");
    scanf("%d",&N);
    arr=(int*)calloc(N,sizeof(int));
    if(arr==NULL)
    {
       printf("Memory allocation is failed!!");
       return 0;
    }
    printf("Enter %d Elements:",N);
    for (i = 0; i < N; i++)
    {
        scanf("%d",arr+i);
    }
    
    greatNum=*(arr+0);
    minNum=*(arr+0);
    for (i = 0; i < N; i++)
    {
        if(greatNum<*(arr+i))
          greatNum=*(arr+i);

        if(minNum>*(arr+i))
          minNum=*(arr+i);
    }
    printf("The Maximum Number is %d and Minimum Number is %d",greatNum,minNum);
    free(arr);
    return 0;
}