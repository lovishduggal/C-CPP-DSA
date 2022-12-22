// Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include <iostream>
#include <cstring>
using namespace std;
class CString
{
private:
    char name[20];

public:
    void setStr(const char str[])
    {
        strcpy(name, str);
    }
    void showStr()
    {
        cout << "String is " << name << endl;
    }
    CString operator+(CString S)
    {
        strcat(this->name, S.name);
        return *this;
    }
    bool operator==(CString S)
    {
        if (strcmp(this->name, S.name) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    CString operator=(CString s)
    {
        if (name == s.name)
        {
            return *this;
        }
        else
        {
            free(name);
            strcpy(name, s.name);
            return *this;
        }
    }
};
int main()
{
    CString s_1, s_2, s_3, s_4;
    s_1.setStr("lovish");
    s_2.setStr("duggal");
    s_3 = (s_1 + s_2);
    s_3.showStr();
    s_3.setStr("krishna");
    s_4.setStr("krishna");
    if (s_4 == s_4)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }
    return 0;
}