// Check if given email address is valid or not in C++
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int index_1 = -1, index_2 = -1, i, c_1 = 0, c_2 = 0;
    bool check_dot = false, check_a = false, check_W1 = false, check_W2 = false;
    char str[] = "lovish11@gmail.com";
    try
    {
        if (str[0] >= 48 && str[0] <= 57)
        {
            throw "Invalid";
        }
        else
        {
            for (i = 0; str[i]; i++)
            {
                if (str[i] == '@')
                {
                    c_1++;
                    if (c_1 == 2)
                        throw "invalid";
                    index_1 = i;
                    check_a = true;
                }
                if (str[i] == '.')
                {
                    c_2++;
                    if (c_2 == 2)
                        throw "invalid";
                    index_2 = i;
                    check_dot = true;
                }
            }
            if (index_1 == -1 || index_2 == -1)
            {
                throw "invalid";
            }
            else if (index_1 > index_2)
            {
                throw "invalid";
            }
            else if (index_2 + 1 == strlen(str))
            {
                throw "invalid";
            }
            if (!((str[index_1 + 1] >= 65 && str[index_1 + 1] <= 90) || (str[index_1 + 1] >= 97 && str[index_1 + 1] <= 122)))
            {
                cout << "block-1";
                throw "invalid";
            }
            else
            {
                check_W1 = true;
            }
            if (!((str[index_2 + 1] >= 65 && str[index_2 + 1] <= 90) || (str[index_2 + 1] >= 97 && str[index_2 + 1] <= 122)))
            {
                cout << "block-2";
                throw "invalid";
            }
            else
            {
                check_W2 = true;
            }
            if (check_dot && check_a && check_W1 && check_W2)
            {
                throw "Valid";
            }
            else
            {
                throw "Invalid";
            }
        }
    }
    catch (const char str[])
    {
        cout << str;
    }
}