#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

void displayGame()
{
   int i, j;
   printf(ANSI_COLOR_BLUE"\t\t\t\tTic-Tac-Toe Game\n\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"1.Play with your friend.\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"2.Play with smart Computer.\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"3.Play with devil Computer.\n"ANSI_COLOR_RESET);
   printf(ANSI_COLOR_GREEN"4.Exit\n\n"ANSI_COLOR_RESET);
   for ( i = 0; i < 3; i++)
   { 
      for ( j = 0; j < 3; j++)
      {
         printf(ANSI_COLOR_YELLOW"%2d "ANSI_COLOR_RESET,3 * i + j +1);
      }

      printf("\n");
   }
   printf(ANSI_COLOR_CYAN"\nEnter your choice:"ANSI_COLOR_RESET);
}

void displayArray(int arr[3][3])
{
   system("cls");
   int i, j;
   for ( i = 0; i < 3; i++)
   {
      for ( j = 0; j < 3; j++)
      {
         if(arr[i][j] == 'X' || arr[i][j] == 'O')
         {
            printf(ANSI_COLOR_YELLOW"%2c "ANSI_COLOR_RESET,arr[i][j]);
         }
         else
         {
            printf(ANSI_COLOR_MAGENTA"%2d "ANSI_COLOR_RESET,arr[i][j]);
         }
      }
       printf("\n");
   }
    
}

int winner_O(int arr[3][3])
{
   if(arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O')
   {
      return 1;
   }
   else if(arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O')
   {
      return 1;
   }
   else if(arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') 
   {
      return 1;
   }
   else if(arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') 
   {
      return 1;
   }
   else if(arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O')
   {
      return 1;
   }
   else if(arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O')
   {
      return 1;
   }
   else if(arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O')
   {
      return 1;
   }
   else if(arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')
   {
      return 1;
   }
   return 0;
}

int winner_X(int arr[3][3])
{
   if(arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') 
   {
      return 1;
   }
   else if(arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') 
   {
      return 1;
   }
   else if(arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') 
   {
      return 1;
   }
   else if(arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X')
   {
      return 1;
   }
   else if(arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X')
   {
      return 1;
   }
   else if(arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X')
   {
      return 1;
   }
   else if(arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')
   {
      return 1;
   }
   else if (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X') 
   {
      return 1;
   }
   return 0;
}

void smCmpTurn(int arr[3][3], int randm[8], int **p)
{
   int i, j, k, q, tmp, bool = 1, digit, flag = 1, flag_2 = 0;

   srand(time(0));

   for ( i = 0; i < 3; i++)
   {
      for ( j = 0; j < 3; j++)
      {
         if(arr[i][j] != 'O' && arr[i][j] !='X')
         {
            tmp = arr[i][j];
            arr[i][j] = 'X';
            if(winner_X(arr))
            {
               arr[i][j] = 'X';
               bool=0;
               if(**p)
               break;
            }
            else
            {
               arr[i][j]=tmp;
            }
         }
      }
      if(j < 3)
         break;
   }

   if(bool)
   {
      for ( i = 0; i < 3; i++)
      {
         for ( j = 0; j < 3; j++)
         {
               if(arr[i][j] != 'O' && arr[i][j] !='X')
               {
                  tmp = arr[i][j];
                  arr[i][j] = 'O';
                  if(winner_O(arr))
                  {
                     arr[i][j] = 'X';
                     bool=0;
                     if(**p)
                     break;
                  }
                  else
                  {
                     arr[i][j]=tmp;
                  }
               }
         }
         if(j < 3)
               break;
      }
   }

   if(bool)
   {
      for ( i = 0; i <= 8; i++)
      {
         digit = rand() % 10 + 1;
         
         if(digit < 10)
         {
            for ( j = 0; j < i; j++)
            {
               if(digit == randm[j])
               break;
            }

            if(i == j)
            {
               for ( k = 0; k < 3; k++)
               {
                  for ( q = 0; q < 3; q++)
                  {
                     if(arr[k][q] == digit)
                     {
                        randm[i] = digit;
                        arr[k][q]  = 'X';
                        flag=0;
                        flag_2=1;
                        break;
                     }
                  }

                  if(q < 3)
                  break;
               }

               if(flag)
               i--;
            }
            else
            i--;
         }
         else
         i--;

         if(flag_2)
         break;
      }
   }
}

void pWComp(int arr[][3], int *p)
{
   int randm[8], i, j, input, validMoves = 0;

   while (validMoves != 5)
   {
      int flag = 1;
      displayArray(arr);
      printf(ANSI_COLOR_BLUE"\n\nPlayer %d, Marking place:"ANSI_COLOR_RESET,1);
      scanf("%d",&input);
      for ( i = 0; i < 3; i++)
      {
         for ( j = 0; j < 3; j++)
         {
            if(arr[i][j] == input)
            {
               arr[i][j] = 'O';
               flag = 0;
               if(validMoves == 4)
               break;
               smCmpTurn(arr,randm,&p);
               break;
            }
         }

         if(j < 3)
         break;
      }

      if(flag)
      {
         displayArray(arr);
         printf(ANSI_COLOR_RED"\n\nInvalid move !!"ANSI_COLOR_RESET);
         getch();
      }
      else
      {
         if(winner_O(arr))
         {
            displayArray(arr);
            printf(ANSI_COLOR_GREEN"\n\nThe Winner is player 1!!\n"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_GREEN"\nThanks for playing\n\n"ANSI_COLOR_GREEN);
            printf(ANSI_COLOR_BLUE"Press any Key for more options"ANSI_COLOR_RESET);
            getch();
            break;
         }
         else if(winner_X(arr))
         {
            displayArray(arr);
            printf(ANSI_COLOR_GREEN"\n\nThe Winner is Computer !!\n"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_GREEN"\nThanks for playing\n\n"ANSI_COLOR_GREEN);
            printf(ANSI_COLOR_BLUE"Press any Key for more options"ANSI_COLOR_RESET);
            getch();
            break;
         }

         validMoves++;
      }
   }
    
   if(validMoves == 5)
   {
      displayArray(arr);
      printf(ANSI_COLOR_YELLOW"\n\nGame Draw !!"ANSI_COLOR_RESET);
      printf(ANSI_COLOR_GREEN"\nThanks for playing\n\n"ANSI_COLOR_GREEN);
      printf(ANSI_COLOR_BLUE"Press any Key for more options"ANSI_COLOR_RESET);
      getch();
   }
}

void pWFriend(int arr[3][3])
{
   int i, j, mark, input, player=1, validMoves = 0;

   while (validMoves != 9)
   {
      int flag = 1;
      displayArray(arr);
      mark = player / 2 ? 'X' : 'O';
      printf(ANSI_COLOR_BLUE"\n\nPlayer %d, Marking place:"ANSI_COLOR_RESET,player);
      scanf("%d",&input);

      for ( i = 0; i < 3; i++)
      {
         for ( j = 0; j < 3; j++)
         {
            if(arr[i][j] == input)
            {
               arr[i][j] = mark;
               flag = 0;
               break;
            }
         }

         if(j < 3)
         break;
      }

      if(flag)
      {
         displayArray(arr);
         printf(ANSI_COLOR_RED"\n\nInvalid move !!"ANSI_COLOR_RESET);
         getch();
      }
      else
      {
         if(winner_O(arr) || winner_X(arr))
         {
            displayArray(arr);
            printf(ANSI_COLOR_GREEN"\n\nThe Winner is player %d!!\n"ANSI_COLOR_RESET,player);
            printf(ANSI_COLOR_GREEN"\nThanks for playing\n\n"ANSI_COLOR_GREEN);
            printf(ANSI_COLOR_BLUE"Press any Key for more options"ANSI_COLOR_RESET);
            getch();
            break;
         }

         validMoves++;

         if(player == 1)
         player = 2;
         else
         player = 1;
      }
   }

   if(validMoves == 9)
   {
      displayArray(arr);
      printf(ANSI_COLOR_YELLOW"\n\nGame Draw !!"ANSI_COLOR_RESET);
      printf(ANSI_COLOR_GREEN"\nThanks for playing\n\n"ANSI_COLOR_GREEN);
      printf(ANSI_COLOR_BLUE"Press any Key for more options"ANSI_COLOR_RESET);
      getch();
   }
}

int main()
{
   while(1)
   {
      system("cls");
      int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}}, x, ch, devil_turn = 1;
      displayGame();
      scanf("%d",&x);
      switch (x)
      {
         case 1:
         pWFriend(arr);
         break;
      
         case 2:
         pWComp(arr,&devil_turn);
         break;

         case 3:
         devil_turn = 0;
         pWComp(arr,&devil_turn);
         break;

         case 4:
         exit(0);
         break;
      }
      
      system("cls");
      printf(ANSI_COLOR_RED"\n\nDo you want to play again?\t\t\t\t anykey --> Play again\n\t\t\t\t\t\t\t n      --> No\n"ANSI_COLOR_RESET);
      printf(ANSI_COLOR_YELLOW"Enter[anyKey / n]"ANSI_COLOR_RESET);
      ch=getch();
      if(ch=='n' || ch=='N')
      break;
   }
}