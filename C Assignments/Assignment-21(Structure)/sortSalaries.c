// Write a function to sort employees according to their salaries [ refer structure from
// question 1]
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

void  display(struct employee Emp[],int N)
{
     int i;
     for ( i = 0; i < N; i++)
     {
        printf("The ID, Name & Salary of Employe is %d, %s & %.2f resp..\n",Emp[i].id,Emp[i].name,Emp[i].salary);
     }
      
}

void sort(struct employee Emp[],int N)
{
   struct employee tmp;
   int i,j;
   
   for ( i = 0; i < N; i++)
   {
        for ( j = i+1; j < N; j++)
        {
              if(Emp[i].salary>Emp[j].salary)
              {
                 tmp=Emp[i];
                 Emp[i]=Emp[j];
                 Emp[j]=tmp;
              }
        }
         
   }
 
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
    struct employee Emp[3],result;
    int i;
    input(Emp,3);
    sort(Emp,3);
    display(Emp,3);
    return 0;
}