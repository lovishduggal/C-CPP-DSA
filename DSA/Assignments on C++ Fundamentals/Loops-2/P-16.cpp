/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    char alp;
    cout << "Enter no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        alp = 65;
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << alp++;
        }
        cout << endl;
    }
    rows = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        alp = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= ((rows * 2) - (2 * i) + 1); j++)
        {
            cout << alp++;
        }
        cout << endl;
    }

    return 0;
}