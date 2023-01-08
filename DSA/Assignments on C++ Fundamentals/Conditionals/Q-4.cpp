// Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.
// Sample Input : Enter an integer: -6
// Sample Output : The number is negative and skipped
#include <iostream>
using namespace std;
int main()
{
    int integer;
    cout << "Enter an integer : ";
    cin >> integer;
    if (integer < 0)
    {
        cout << "The number is negative and skipped" << endl;
    }
    else
    {
        cout << "You entered a positive integer: " << integer << endl;
    }
    return 0;
}