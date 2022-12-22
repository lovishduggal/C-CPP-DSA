// Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
    char str[20];

public:
    void setStr(const char str[20])
    {
        strcpy(this->str, str);
    }
    void showStr()
    {
        cout << "The String is " << str;
    }
    String operator!();
};
String String::operator!()
{
    int i, j;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 97)
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    return *this;
}
int main()
{
    String s_1;
    s_1.setStr("lOVISH");
    s_1.showStr();
    (!s_1).showStr();
}