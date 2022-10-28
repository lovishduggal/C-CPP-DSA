// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include<stdio.h>
#include<string.h>
struct employee input(struct employee);
void clean_stdin(void);
struct employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct employee Emp,result;
    result = input(Emp);
    printf("The ID, Name & Salary of Employe is %d, %s & %.2f resp..",result.id,result.name,result.salary);
}
struct employee input(struct employee Emp)
{
    printf("Enter Id of Employee:");
    scanf("%d",&Emp.id);
    
    clean_stdin();

    printf("Enter Name of Employee:");
    fgets(Emp.name,20,stdin);
    Emp.name[strlen(Emp.name)-1]='\0';
      
    printf("Enter Salary of Employee:");
    scanf("%f",&Emp.salary);
    return Emp;
}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}