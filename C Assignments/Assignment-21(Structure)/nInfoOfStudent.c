// Write a program to store information of n students and display them using structure
#include<stdio.h>
#include<string.h>
struct infoOfStudents input(struct infoOfStudents);
void display(struct infoOfStudents);
void clean_stdin(void);
struct infoOfStudents
{
    int rollNo;
    char name[20];
};

int main()
{
    struct infoOfStudents data[100],result[100];
    int i,N;
    printf("N -> No of students if N=10 that means 10 stduents!!\n");
    printf("Enter N:");
    scanf("%d",&N);
    printf("Enter Name and RollNo of %d Students:\n",N);
    for ( i = 0; i <    N; i++)
    {
        printf("%d.",i+1);
        result[i]=input(data[i]);
    }

    for ( i = 0; i < N; i++)
    {
        printf("%d.",i+1);
        display(result[i]);
    }

    return 0;
}

struct infoOfStudents input(struct infoOfStudents data)
{
    printf("Rollno:");
    scanf("%d",&data.rollNo);

    clean_stdin();

   printf("Name:");
   fgets(data.name,20,stdin);
   data.name[strlen(data.name)-1]='\0';
   return data;
}

void display(struct infoOfStudents data)
{
   printf("The Name and RollNo of the Student is %s & %d resp..\n",data.name,data.rollNo);
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}