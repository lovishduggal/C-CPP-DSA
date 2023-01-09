// 121212
// 212121
// 121212
// 212121
#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter no. of rows and col : ";
    cin >> rows >> col;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "2";
        }
        cout << endl;
    }
    return 0;
}