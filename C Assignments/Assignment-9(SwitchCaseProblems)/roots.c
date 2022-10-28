// C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("The Quadratic Equation looks like aX^2+bX+c\n");
    printf("Enter value of a (a!=0):");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    float D=b*b-4*a*c,r_1,r_2;
    switch (D>=0)
    {
        case 1:
        {
           switch (D>0)
           {
             case 1:
              r_1=(-b+sqrt(D))/(2.0*a);
              r_2=(-b-sqrt(D))/(2.0*a);
              printf("The two Real and Distinct roots are %.2f and %.2f",r_1,r_2);
              break;

             case 0:
              r_1=-b/(2.0*a);
              r_2=-b/(2.0*a);
              printf("The two Equal roots are %.2f and %.2f",r_1,r_2);
              break;
           }  
        }
        break;
          
        case 0:
        D=-D;
        printf("The two Imaginary roots are %.2f+%.2fi and %.2f-%.2fi ",-b/(2.0*a),sqrt(D)/(2.0*a),-b/(2.0*a),sqrt(D)/(2.0*a));
        break;
    }
     
    return 0;
}
