// Write a program to print absolute value of a number entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    if (num < 0)
    {
        num = -num;
    }
    cout << "The absolute value is " << num << endl;
    return 0;
}