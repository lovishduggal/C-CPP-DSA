// Write a program to calculate marks to grades . Follow the conversion rule as given below :
// 100 – 90--------A+
// 90 – 80--------A
// 80 – 70--------B+
// 70 – 60--------B
// 60 – 50--------C
// 50 – 40--------D
// 40 – 30--------E
// 30 – 0---------F
// Sample Input : Enter Your Marks: 98
// Sample Output : Your Grade is A+
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks : ";
    cin >> marks;
    switch (marks)
    {
    case 90 ... 100:
        cout << "Your grade is A+ " << endl;
        break;
    case 80 ... 89:
        cout << "Your grade is A " << endl;
        break;
    case 70 ... 79:
        cout << "Your grade is B+ " << endl;
        break;
    case 60 ... 69:
        cout << "Your grade is B " << endl;
        break;
    case 50 ... 59:
        cout << "Your grade is C " << endl;
        break;
    case 40 ... 49:
        cout << "Your grade is D " << endl;
        break;
    case 30 ... 39:
        cout << "Your grade is E " << endl;
        break;
    case 0 ... 29:
        cout << "Your grade is F " << endl;
        break;
    default:
        cout << "Envalid Marks !!";
        break;
    }
    return 0;
}