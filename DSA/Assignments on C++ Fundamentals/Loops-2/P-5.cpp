// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no. of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows - i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}