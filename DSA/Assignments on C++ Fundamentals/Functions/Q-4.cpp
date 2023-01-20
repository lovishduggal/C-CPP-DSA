// Given two numbers a and b, write a program using functions to print all the odd numbers
// between them.
#include <iostream>
using namespace std;
void odd(int x)
{
    if (!(x % 2 == 0))
    {
        cout << x << " ";
    }
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
        odd(i);
    }
    return 0;
}