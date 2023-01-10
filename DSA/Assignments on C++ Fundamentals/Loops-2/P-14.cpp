/*
   1
  2 2
 3   3
4     4
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
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
            {
                cout << i;
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