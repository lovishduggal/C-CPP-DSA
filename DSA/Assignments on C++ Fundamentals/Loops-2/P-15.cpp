/*
Write a program to print the cross pattern given below (in the shape of X):
*    *
 *   *
   *
 *   *
*    *
valid input : 5, 15, 25, 35 ....
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j == i || j == (rows + 1 - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}