// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
#include <string.h>
using namespace std;
class Bill
{
private:
    char cusName[20];
    int units;
    float amount;

public:
    Bill()
    {
        strcpy(cusName,"lovish");
        units = 0;
        amount = 0;
    }
    void setData(char Name[], int ut)
    {
        strcpy(cusName, Name);
        units = ut;
    }
    void calcBill()
    {
        if (units > 1 && units < 100)
        {
            amount = 1.20 * units;
        }
        else if (units > 100 && units < 200)
        {
            amount = (1.20 * 100) + (2 * (units - 100));
        }
        else if (units > 200)
        {
            amount = (1.20 * 100) + (2 * 100) + (3 * (units - 200));
        }
        else
        {
            cout << "Units must be positive or greater than 0!!" << endl ;
        }
    }
    void displayBill()
    {
        cout << "The bill of " << cusName << " is " << amount << " " << "rupee" <<endl;
    }
};
int main()
{
    Bill b_1;
    b_1.setData("Lovish duggal", 299);
    b_1.calcBill();
    b_1.displayBill();
}