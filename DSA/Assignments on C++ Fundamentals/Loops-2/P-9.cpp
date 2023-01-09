// 123456
// 1    6
// 1    6
// 123456
#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter Rows and Columns : ";
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == col)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}