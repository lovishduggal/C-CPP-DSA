// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    void setHr(int h)
    {
        hr = h;
    }
    void setMin(int m)
    {
        min = m;
    }
    void setSec(int s)
    {
        sec = s;
    }
    int getHr()
    {
        return hr;
    }
    int getMin()
    {
        return min;
    }
    int getSec()
    {
        return sec;
    }
    void setTime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        normalize();
        cout << "The Time is " << setw(2) << setfill('0') << hr << ":"
             << setw(2) << setfill('0') << min << ":"
             << setw(2) << setfill('0') << sec << endl;
    }
    void normalize()
    {
        min = min + (sec / 60);
        sec = sec % 60;
        hr = hr + (min / 60);
        min = min % 60;
    }
    Time add(Time C)
    {
        C.hr = hr + C.hr;
        C.min = min + C.min;
        C.sec = sec + C.sec;
        return C;
    }
};
int main()
{
    Time t_1, t_2, t_3;
    t_1.setTime(4, 10, 20);
    t_2.setTime(2, 20, 50);
    t_3 = t_1.add(t_2);
    t_3.showTime();
    return 0;
}