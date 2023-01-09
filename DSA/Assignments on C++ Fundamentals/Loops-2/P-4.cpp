// *
// **
// * *
// *  *
// *****
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1 || i == j || i == rows)
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