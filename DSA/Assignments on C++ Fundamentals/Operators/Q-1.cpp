// Write a program to check whether two numbers (entered by user) are equal or not.
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 1st Number : ";
    cin >> x;
    cout << "Enter 2nd Number : ";
    cin >> y;
    if (x == y)
    {
        cout << "Both Numbers are unequal!!" << endl;
    }
    else
    {
        cout << "Both Numbers are equal!!" << endl;
    }
    return 0;
}