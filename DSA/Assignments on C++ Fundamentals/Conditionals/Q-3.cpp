// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.
// Explanation :
// Formula for profit and loss
// Profit = S.P - C.P
// Loss = C.P - S.P
// (S.P is Selling Price and C.P is Cost Price)
// Sample Input :
// Enter cost price: 4000
// Enter selling price: 9560
// Sample Output :
// Profit = 5560
#include <iostream>
using namespace std;
int main()
{
    int SP, CP, amt;
    cout << "Enter cost price : ";
    cin >> CP;
    cout << "Enter selling price : ";
    cin >> SP;
    if (SP < CP)
    {
        amt = CP - SP;
        cout << "Loss is " << amt;
    }
    else if (SP > CP)
    {
        amt = SP - CP;
        cout << "Profit is " << amt;
    }
    else
    {
        cout << "Neither profit nor loss !!";
    }

    return 0;
}