// Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
// Time t1(2,30);
// t1.display();
// Minute m1;
// m1.display();
// m1=t1 // Fetch minute from time
// t1.display();
// m1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int hr;
    int min;

public:
    Time(int h, int m)
    {
        hr = h;
        min = m;
    }
    void setData(int x, int y)
    {
        hr = x;
        min = y;
    }
    int getMin()
    {
        return min;
    }
    void showData()
    {
        cout << hr << " Hours and " << min << " minutes" << endl;
    }
};
class Minutes
{
private:
    int min;

public:
    Minutes()
    {
        min = 0;
    }
    Minutes(Time T)
    {
        min = T.getMin();
    }
    void setData(int x)
    {
        min = x;
    }
    void showData()
    {
        cout << min << " minutes" << endl;
    }
};
int main()
{
    Time t1(2, 90);
    t1.showData();
    Minutes m1;
    m1.setData(40);
    m1 = t1;
    t1.showData();
    m1.showData();
    return 0;
}
