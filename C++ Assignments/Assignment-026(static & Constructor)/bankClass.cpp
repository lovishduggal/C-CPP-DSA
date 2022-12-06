// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
private:
    float principal;
    float year;
    float rateOfInterest;
    float amount;

public:
    Bank(float p, float y, float r)
    {
        principal = p;
        year = y;
        rateOfInterest = r;
        amount = 0;
    }
    void read(float p, float y, float r)
    {
        cout << "Enter Principal, Time and Rate:";
        cin >> principal >> year >> rateOfInterest;
    }
    void calc()
    {
        amount = (principal * year * rateOfInterest) / 100;
    }
    void display()
    {
        cout << "The S.I is " << amount;
    }
};

int main()
{
    Bank acc_1(500, 3, 2000);
    acc_1.calc();
    acc_1.display();
}