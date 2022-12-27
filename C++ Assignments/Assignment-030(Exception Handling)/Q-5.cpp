// Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any letter.
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
     char password[50];
     bool digit_check = false, letter_check = false;
     int i, j;
     cout << "Enter Password:";
     cin >> password;
     try
     {
          if (strlen(password) < 6)
          {
               throw "Password must have 6 or more than 6 characters";
          }
          else
          {
               for (i = 0; password[i]; i++)
               {
                    if (isdigit(password[i]) != 0)
                    {
                         digit_check = true;
                    }
                    if (strchr(password, password[i]) != 0)
                    {
                         letter_check = true;
                    }
               }
               if (digit_check && letter_check)
               {
                    throw "Password is accepted.";
               }
               else
               {
                    throw "Password must contains digits and letters";
               }
          }
     }
     catch (const char str[])
     {
          cout << str;
     }
}