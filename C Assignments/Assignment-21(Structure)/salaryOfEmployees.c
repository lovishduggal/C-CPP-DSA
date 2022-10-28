// Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include<stdio.h>
#include<string.h>
void clean_stdin(void);
struct employee
{
    int id;
    char name[20];
    float salary;
};

void  input(struct employee Emp[] , int N)
{
    int i;
    for ( i = 0; i < N; i++)
    {
         printf("Enter Id of Employee:");
         scanf("%d",&Emp[i].id);
    
         clean_stdin();

         printf("Enter Name of Employee:");
         fgets(Emp[i].name,20,stdin);
         Emp[i].name[strlen(Emp[i].name)-1]='\0';
      
         printf("Enter Salary of Employee:");
         scanf("%f",&Emp[i].salary);
    }
}


void highSalary(struct employee Emp[],int N)
{
   int i,hSe,found;
   hSe=Emp[0].salary;
   for ( i = 0; i < N; i++)
   {
         if(hSe<Emp[i].salary)
         {
         hSe=Emp[i].salary;
         found=i;
         }
   }
   printf("The the highest salary employee from a given array[10] is %s",Emp[found].name);
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
int main()
{
    struct employee Emp[10],result;
    int i;
    input(Emp,10);
    highSalary(Emp,10);
    return 0;
}