// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include<stdio.h>
#include<string.h>
struct Marks input(struct Marks);
void display(struct Marks);
void clean_stdin(void);
struct Marks
{
    int rollNo;
    char name[20];
    int chemMarks;
    int mathMarks;
    int phyMarks;
    float result;
};
int main()
{
   struct Marks Students[5],result[5];
     int i;
    printf("Enter the marks of 5 students:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d.",i+1);
        result[i]=input(Students[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d.",i+1);
        display(result[i]);
    }
    return 0;
}

struct Marks input(struct Marks student)
{
    printf("Rollno:");
    scanf("%d",&student.rollNo);

    clean_stdin();

    printf("Name:");
    fgets(student.name,20,stdin);
    student.name[strlen(student.name)-1]='\0';

    printf("chemMarks:");
    scanf("%d",&student.chemMarks);

    printf("mathsMarks:");
    scanf("%d",&student.mathMarks);

    printf("phyMarks:");
    scanf("%d",&student.phyMarks);

    student.result=((student.chemMarks+student.mathMarks+student.phyMarks)/300.0)*100;
   return student;
}

void display(struct Marks student)
{
   printf("The Percentage of %s is %.2f\n",student.name,student.result);
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}