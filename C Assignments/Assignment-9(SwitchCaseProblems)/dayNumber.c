// Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Day Number in order to get Greeting of that Day :");
    scanf("%d",&x);
    switch (x)
    {
     case 1:
     printf("Hey, Sunshine! How are you?");
     break;
     case 2:
     printf("There's My Pumpkin!");
     break;
     case 3:
     printf("What's roasting, little poulet?");
     break;
     case 4:
     printf("Howdy-doody! Bring me up to date!");
     break;
     case 5:
     printf("Ghostbusters!");
     break;
     case 6:
     printf("More Tips To Make Any Greeting Fun");
     break;
     case 7:
     printf("Wats poppin Chica?");
     break;
    
     default:
     printf("Enter valid Day Number!!");
     break;
    }
}