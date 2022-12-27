// Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char mobNum[50];
    int count = 0, i;
    cout << "Enter Mobile Number:";
    cin >> mobNum;

    try
    {
        if (strlen(mobNum) == 10)
        {
            cout << "Enter Number is valid!!";
        }
        else
        {
            throw "A number contains 10 digit";
        }
    }
    catch (const char str[50])
    {
        cout << str;
    }
}
