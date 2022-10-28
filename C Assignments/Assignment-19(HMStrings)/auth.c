#include <stdio.h>
#include <string.h>
int main()
{
    char userNamesPasswords[5][2][20]={{"lovish","1234"},{"krishna","4321"},{"Ram","6789"},{"akash","0987"},{"jaspreet","1560"}};

    char userName[20];
    printf("Enter Valid user name:");
    fgets(userName,20,stdin);
    userName[strlen(userName)-1]='\0';

    char userPassword[20];
    printf("Enter Valid user password:");
    fgets(userPassword,20,stdin);
    userPassword[strlen(userPassword)-1]='\0';
    
    int i;
    for ( i = 0; i < 5; i++)
    {
         if(strcmp(userNamesPasswords[i][0],userName)==0 && strcmp(userNamesPasswords[i][1],userPassword)==0)
           break;
    }

    if(i==5)
    printf("Invalid Please check your userName or Password");
    else
    printf("Successfully Login!!");

    return 0;
}