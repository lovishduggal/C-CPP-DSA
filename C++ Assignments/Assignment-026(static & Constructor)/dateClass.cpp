// Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
    private:
    int year, month, day;
    public:
    Date()
    {
        year = 0;
        month = 0;
        day = 0;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setDay(int d)
    {
        day = d;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    void showDate()
    {
        cout << "The Date is " << setw(2) << setfill('0') << day << "-"
                               << setw(2) << setfill('0') << month << "-"
                               << year << endl;
    }

};
int main()
{
    Date d_1;
    d_1.setDay(4);
    d_1.setMonth(12);
    d_1.setYear(2022);
    d_1.showDate();
    return 0;
}