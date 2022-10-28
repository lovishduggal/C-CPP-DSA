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

int checkSortedArray(int b[][4])
{
   int sort[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,32}},i,j,check=0;
    for ( i = 0; i < 4 ; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if(sort[i][j]==b[i][j])
            check++;
        }
    }
    if(check==16)
       return 1;

    return 0;
}

void displayArray(int b[][4])
{
    int i,j;
    printf(ANSI_COLOR_YELLOW"\n\n\n- - - - - - - - - - -\n");
    for ( i = 0; i < 4; i++)
    {

        for ( j = 0; j < 4; j++)
        {
            if(b[i][j]==32)
            {
                printf("| %2c ",b[i][j]);
                continue;
            }
            printf("| %2d ",b[i][j]);
        }
         printf("|\n");
    }
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n\n"ANSI_COLOR_RESET);  
}

void upShift(int b[][4],int *k,int *q,char name[],int *maxMoves)
{
     if(*k==3)
       return;
    (*maxMoves)--; 
    int i,j,tmp;       
    tmp=b[*k][*q];
    b[*k][*q]=b[(*k)+1][*q];
    b[(*k)+1][*q]=tmp;
    (*k)++;
    system("cls");
    printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,*maxMoves);
    displayArray(b);
}

void leftShift(int b[][4],int *k,int *q,char name[],int *maxMoves)
{
    if(*q==3)
      return;
    (*maxMoves)--; 
    int i,j,tmp;       
    tmp=b[*k][*q];
    b[*k][*q]=b[*k][(*q)+1];
    b[*k][(*q)+1]=tmp;
    (*q)++;
    system("cls");
    printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,*maxMoves);
    displayArray(b);
}

void rightShift(int b[][4],int *k,int *q,char name[],int *maxMoves)
{
    if(*q==0)
      return;
    (*maxMoves)--; 
    int i,j,tmp;       
    tmp=b[*k][*q];
    b[*k][*q]=b[*k][(*q)-1];
    b[*k][(*q)-1]=tmp;
    (*q)--;
    system("cls");
    printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,*maxMoves);
    displayArray(b);
}

void downShift(int b[][4],int *k,int *q,char name[],int *maxMoves)
{
    if(*k==0)
      return;
    (*maxMoves)--; 
    int i,j,tmp;       
    tmp=b[*k][*q];
    b[*k][*q]=b[(*k)-1][*q];
    b[(*k)-1][*q]=tmp;
    (*k)--;
    system("cls");
    printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,*maxMoves);
    displayArray(b);
}

void sortedArray()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,32}};
    int i,j;
    
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n");
    for ( i = 0; i < 4; i++)
    {

      for ( j = 0; j < 4; j++)
      {
         if(a[i][j]==32)
         {
            printf("| %2c ",a[i][j]);
            continue;
         }
          printf("| %2d ",a[i][j]);
      }
        printf("|\n");
    }
    printf(ANSI_COLOR_YELLOW"- - - - - - - - - - -\n\n"ANSI_COLOR_RESET);
   

}

void rules()
{
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
    sortedArray();
    printf(ANSI_COLOR_RED"5.You can exit the Game at any time pressing 'e'\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN"\t\tHappy Gaming, Best of Luck\n\t   Try to Win in minimum number of Moves\n\n"ANSI_COLOR_RESET);
    printf(ANSI_COLOR_BLUE"Enter any key in order to start Game..."ANSI_COLOR_RESET);
    getch();
    
}

int main()
{
  system("cls");
  char name[20],key,ch;
  int a[16],b[4][4];
  printf("Enter your Name:");
  fgets(name,20,stdin);
  name[strlen(name)-1]='\0';
  printf("%d",strlen(name));
  srand(time(0));
  while (1)
  {      
        int maxMoves=4,i,j,c=0,k=3,q=3,val;
        ch='a';
        system("cls");
        rules();
        system("cls");
        printf(ANSI_COLOR_MAGENTA"\n\n\tPlayer Name:%s\t\t\t\tMove Reamaing:%d"ANSI_COLOR_RESET,name,maxMoves);
   
        for ( i = 0; i < 15; i++) // random array..
        { 
            val=rand()%100+1;
            if(val>0 && val<16)
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
              b[i][j]=a[c];
              c++;
           }
        }    
         
        displayArray(b); 

        while (1)
        {
            key=getch();
            
            switch (key)
            {
                case 101://exit
                  break;
                case 72://up 
                  upShift(b,&k,&q,name,&maxMoves);
                   break;
                case 75://left 
                  leftShift(b,&k,&q,name,&maxMoves);
                  break; 
                case 77://right
                  rightShift(b,&k,&q,name,&maxMoves);
                  break;
                case 80://down
                  downShift(b,&k,&q,name,&maxMoves);
                  break;  
            }

            if(checkSortedArray(b)) // checking after every shift the array is sorted or not !!
            {  
                printf(ANSI_COLOR_GREEN"\t\t\tYou Win !!\n\n"ANSI_COLOR_RESET);
                printf(ANSI_COLOR_CYAN"want to play again ?\nEnter y to play again:\n\nwant to exit game ?\nEnter any key in order to Exit:\n\n"ANSI_COLOR_RESET);
                getch();
                ch=getch();
                if(ch=='y')
                break;
                else
                break;
            }

            if(key==101)// for exit
              break;
            
            if(maxMoves==0)// if moves are zero.
            {
                system("cls");
                printf(ANSI_COLOR_RED"\t\t\tYou lose !!\n\n\n"ANSI_COLOR_RESET);
                printf(ANSI_COLOR_CYAN"want to play again ?\nEnter y to play again:\n\nwant to exit game ?\nEnter any key in order to Exit:\n\n"ANSI_COLOR_RESET);
                ch=getch();
                if(ch=='y')
                break;
                else
                break;
            } 
        }
       
       if(ch!='y')
       {
         system("cls");
         printf(ANSI_COLOR_BLUE"\n\n\t\t\tThanks for Playing!!\n\n"ANSI_COLOR_RESET);
         break;  
       }  
  }  
   
}