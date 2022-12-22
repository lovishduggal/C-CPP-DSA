// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
#include <iostream>
using namespace std;
class Time
{
private:
    int hr, min, sec;

public:
    friend istream &operator>>(istream &, Time &);
    friend ostream &operator<<(ostream &, Time &);
    bool operator==(Time);
};
istream &operator>>(istream &is, Time &t)
{
    cout << endl
         << "Enter Hours    : ";
    is >> t.hr;
    cout << "Enter Minutes  : ";
    is >> t.min;
    cout << "Enter seconds  : ";
    is >> t.sec;
    cout << endl;
    return is;
}
ostream &operator<<(ostream &os, Time &t)
{
    cout << endl
         << "Hours    : " << t.hr << endl
         << "Minutes  : " << t.min << endl
         << "Seconds  : " << t.sec << endl
         << endl;
    return os;
}
bool Time::operator==(Time obj)
{
    if(((hr * 3600) + (min * 60) + sec) == ((obj.hr * 3600) + (obj.min * 60) + obj.sec))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Time t_1, t_2;
    cout << "--------Enter Time-1-------" << endl;
    cin >> t_1;
    cout << "First Time:";
    cout << t_1;
    cout << "--------Enter Time-2-------" << endl;
    cin >> t_2;
    cout << t_2;
    if(t_1 == t_2)
    {
        cout << "Time is same";
    }
    else
    {
        cout << "Time is not same";
    }
    return 0;
}
