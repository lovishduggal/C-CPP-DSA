// Write a program to store information of 10 students and display them using structure.

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
    struct infoOfStudents data[10],result[10];
    int i;
    printf("Enter Name and RollNo of 10 Students:\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d.",i+1);
        result[i]=input(data[i]);
    }

    for ( i = 0; i < 10; i++)
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
   printf("The Name and RollNo of the Student is %s & %d\n",data.name,data.rollNo);
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}