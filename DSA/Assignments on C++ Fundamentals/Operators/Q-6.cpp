// Design a calculator to perform basic arithmetic operations (+,-,/,*,%)
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int menuDriven()
{
    int choice;
    cout << "1.Addition" << endl;
    cout << "2.Substraction" << endl;
    cout << "3.Divison" << endl;
    cout << "4.Multiplication" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;
}
int main()
{
    float num_1, num_2, result;
    while (1)
    {
        system("cls");
        switch (menuDriven())
        {
        case 1:
            cout << "Enter two number : ";
            cin >> num_1 >> num_2;
            result = num_1 + num_2;
            cout << "\nThe result is " << result;
            getch();
            break;
        case 2:
            cout << "Enter two number : ";
            cin >> num_1 >> num_2;
            result = num_1 - num_2;
            cout << "\nThe result is " << result;
            getch();
            break;
        case 3:
            cout << "Enter two number : ";
            cin >> num_1 >> num_2;
            result = num_1 / num_2;
            cout << "\nThe result is " << result;
            getch();
            break;
        case 4:
            cout << "Enter two number : ";
            cin >> num_1 >> num_2;
            result = num_1 * num_2;
            cout << "\nThe result is " << result;
            getch();
            break;
        default:
            cout << "Invalid Input !!";
            getch();
            break;
        }
    }
    return 0;
}