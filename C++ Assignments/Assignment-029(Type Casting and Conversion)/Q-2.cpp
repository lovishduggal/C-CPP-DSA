// Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
// int ) to Time class.

// Example-
// int main()

// {
// int duration;Page2/3Page2/3
// cout<<”Enter time duration in minutes”;
// cin>>duration;
// Time t1 = duration;
// t1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int hr;

public:
    void showTime()
    {
        cout << "The hour is " << hr << " hours" << endl;
    }
    Time(int x)
    {
        hr = x / 60;
    }
    Time() {}
};
int main()
{
    int duration;
    cout << "Enter total minutes in order to convert into hours:";
    cin >> duration;
    Time t_1;
    t_1 = duration;
    t_1.showTime();
}
