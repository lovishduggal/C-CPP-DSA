// Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<string.h>
struct employee input(struct employee);
struct employee display(struct employee);
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
    display(result);
    return 0;
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
struct employee display(struct employee result)
{
  printf("The ID, Name & Salary of Employe is %d, %s & %.2f resp..",result.id,result.name,result.salary);
}
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}