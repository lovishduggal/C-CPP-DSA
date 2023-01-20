#include <iostream>
using namespace std;

bool prime(int x)
{
    int j;
    for (j = 2; j < x; j++)
    {
        if (x % j == 0)
            return false;
    }
    return true;
}
int main()
{
    int x, y;
    cout << "Enter starting number : ";
    cin >> x;
    cout << "Enter ending number : ";
    cin >> y;
    for (int i = x; i <= y; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}