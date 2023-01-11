/*
     2
    3 5
   7 11 13
  17 19 23 29
 31 37 41 43 47
53 59 61 67 71 73
*/
#include <iostream>
using namespace std;
int main()
{
    int rows, k, num = 2;
    cout << "Enter the no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                while (1)
                {
                    for (k = 2; k < num; k++)
                    {
                        if (num % k == 0)
                        {
                            break;
                        }
                    }
                    if (k == num)
                    {
                        cout << num;
                        ++num;
                        break;
                    }
                    else
                    {
                        ++num;
                    }
                }
            }
        }
        cout << endl;
    }
}