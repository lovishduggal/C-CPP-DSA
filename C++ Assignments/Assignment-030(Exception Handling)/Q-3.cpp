// Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char email[50];
    cout << "Enter E-mail:";
    cin >> email;
    try
    {
        if (strchr(email, '@') == 0)
        {
            throw "Email must contain @.";
        }
        else
        {
            cout << "The E-mail is accepted.";
        }
    }
    catch (const char str[50])
    {
        cout << str;
    }
    return 0;
}
