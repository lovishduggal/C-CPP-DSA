#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

int checkSortedArray(int arr[][4])
{
   int sort[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,32}},i,j,check=0;
    for ( i = 0; i < 4 ; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(sort[i][j]==arr[i][j])
            check++;
        }
    }
    
    if(check==16)
       return 1;

    return 0;
}

void displayArray(int arr[][4],char name[],int *maxMoves)
{
    system("cls");
    printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,*maxMoves);
    int i,j;
    printf(ANSI_COLOR_YELLOW"\n\n\n- - - - - - - - - - -\n");
    for ( i = 0; i < 4; i++)
    {

        for ( j = 0; j < 4; j++)
        {
            if(arr[i][j]!=32)
            {
                printf("| %2d ",arr[i][j]);
            }
            else
            printf("|    ");
        }
         printf("|\n");
    }
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n\n"ANSI_COLOR_RESET);  
}

void swap(int *p,int *q)
{
   *p = *p + *q;
   *q = *p - *q;
   *p = *p - *q;
}

int upShift(int arr[][4])
{
   int i,j;
   for ( i = 0; i < 4; i++)
   {
       for ( j = 0; j <  4; j++)
       {
            if(arr[i][j]==32)
            {
               if(i==3)
                  return 0;
            
               swap(&arr[i][j],&arr[i+1][j]);
               return 1;
            }
       }
   }
}

int leftShift(int arr[][4])
{
   int i,j;
   for ( i = 0; i < 4; i++)
   {
       for ( j = 0; j <  4; j++)
       {
            if(arr[i][j]==32)
            {
               if(j==3)
                  return 0;
            
               swap(&arr[i][j],&arr[i][j+1]);
               return 1;
            }
       }
   }
}

int rightShift(int arr[][4])
{
   int i,j;
   for ( i = 0; i < 4; i++)
   {
       for ( j = 0; j <  4; j++)
       {
            if(arr[i][j]==32)
            {
               if(j==0)
                  return 0;
            
               swap(&arr[i][j],&arr[i][j-1]);
               return 1;
            }
       }
   }
}

int downShift(int arr[][4])
{
   int i,j;
   for ( i = 0; i < 4; i++)
   {
       for ( j = 0; j <  4; j++)
       {
            if(arr[i][j]==32)
            {
               if(i==0)
                  return 0;
            
               swap(&arr[i][j],&arr[i-1][j]);
               return 1;
            }
       }
   }
}

void randomArr(int arr[][4])
{ 
   int a[16], i, j, val,c=0;
    for ( i = 0; i < 15; i++) // random array..
    { 
        val= rand() % 100 + 1;
        if( val > 0 && val < 16)
        {
            for ( j = 0; j < i; j++)
            {
                if(val==a[j])
                   break;
            }

            if(i==j)
              a[i]=val;
            else
              i--;
        }
        else
          i--;
    }

    a[i]=32; //sets last value of 1-D array(a)...

    for ( i = 0; i < 4; i++) //copy random array from 1-D array(a) to 2-D array(b)... 
    {
        for ( j = 0; j < 4; j++)
        {
            arr[i][j]=a[c];
            c++;
        }
    }    
}

void rules()
{
    system("cls");
    int i,j;
    printf("\t\t\t       Matrix Puzzle\n\n");
    printf(ANSI_COLOR_RED"\t\t\tRULE AND INSTRUCTIONS OF THIS GAME!!\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"1.You can move only 1 step at a time with the arrow key\n"ANSI_COLOR_RESET);
    printf("\t\tMove Up   : by Up arrow Key\n");
    printf("\t\tMove Down : by Down arrow Key\n");
    printf("\t\tMove Left : by Left arrow Key\n");
    printf("\t\tMove Right: by Right arrow Key\n\n");
    printf(ANSI_COLOR_RED"2.You can move numbers at an empty position only.\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"3.For each valid move : your total number of moves will decrease by 1.\n\n"ANSI_COLOR_RESET);
    printf("\t\t\tWinning Situation:\n");
    printf(ANSI_COLOR_RED"1.Number in a 4*4 matrix should be in order from 1 to 15\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n");
    for ( i = 0; i < 4; i++)
    {

      for ( j = 0; j < 4; j++)
      {
         if((4 * i+j+1)!=16)
         {
          printf("| %2d ",(4 * i+j+1));
         }
         else
         printf("|    ");

      }
        printf("|\n");
    }
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_RED"5.You can exit the Game at any time pressing 'e'\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN"\t\tHappy Gaming, Best of Luck\n\t   Try to Win in minimum number of Moves\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE"Enter any key in order to start Game..."ANSI_COLOR_RESET);
    getch();
    
}

int main()
{
    system("cls");
    char name[20],key,ch;
    int arr[4][4],maxMoves=100;//->updating our logic
    printf("Enter your Name:");
    fgets(name,20,stdin);
    name[strlen(name)-1]='\0';
    printf("%d",strlen(name));
    srand(time(0));
    while (1)
    {      
        if(maxMoves==0)
        {
           system("cls");
           printf(ANSI_COLOR_RED"\t\t\tYou lose !!\n\n\n"ANSI_COLOR_RESET);
           printf(ANSI_COLOR_CYAN"want to play again ?\nEnter y to play again:\n\nwant to exit game ?\nEnter any key in order to Exit:\n\n"ANSI_COLOR_RESET);
           ch=getch();
           if(ch=='y')
             maxMoves=4;
           else
           { system("cls");
             printf(ANSI_COLOR_BLUE"\n\n\t\t\tThanks for Playing!!\n\n"ANSI_COLOR_RESET);
             exit(0);
           } 
        }
        int i,j;
        rules();  
        randomArr(arr); 
        displayArray(arr,name,&maxMoves); 
        while (maxMoves)
        {
            if(checkSortedArray(arr)) // checking after every shift the array is sorted or not !!
            {  
                printf(ANSI_COLOR_GREEN"\t\t\tYou Win !!\n\n"ANSI_COLOR_RESET);
                printf(ANSI_COLOR_CYAN"want to play again ?\nEnter y to play again:\n\nwant to exit game ?\nEnter any key in order to Exit:\n\n"ANSI_COLOR_RESET);
                ch=getch();
                if(ch == 'y')
                {
                  maxMoves=4;
                  break;
                }
                else
                {
                  system("cls");
                  printf(ANSI_COLOR_BLUE"\n\n\t\t\tThanks for Playing!!\n\n"ANSI_COLOR_RESET);
                  exit(0);
                } 
            }

            key=getch();
            
            switch (key)
            {
                case 101://exit
                   break;
                case 72://up 
                  if(upShift(arr))
                  {
                    maxMoves--;
                    displayArray(arr,name,&maxMoves); 
                  }
                   break;
                case 75://left 
                  if(leftShift(arr))
                  {
                    maxMoves--;
                    displayArray(arr,name,&maxMoves); 
                  }
                   break; 
                case 77://right
                  if(rightShift(arr))
                  {
                    maxMoves--;
                    displayArray(arr,name,&maxMoves);
                  }
                   break;
                case 80://down
                 if (downShift(arr))
                 {  
                    maxMoves--;
                    displayArray(arr,name,&maxMoves);
                 }
                  break;  
            }

            if(key==101)
            {
               system("cls");
               printf(ANSI_COLOR_BLUE"\n\n\t\t\tThanks for Playing!!\n\n"ANSI_COLOR_RESET);
               exit (0);
            }
        } 
    }  
   
}