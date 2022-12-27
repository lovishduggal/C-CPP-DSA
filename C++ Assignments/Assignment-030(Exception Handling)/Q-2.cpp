#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    float num_1, num_2, result;
    char op;
    cout << "Enter num_1:";
    cin >> num_1;
    try
    {
        if (num_1 == 0)
            throw 0;
        else
        {
            cout << "Enter Operator:";
            cin >> op;
            if (op == '+' || op == '-' || op == '*' || op == '/')
            {
                cout << "Enter num_2:";
                cin >> num_2;
                if (num_2 == 0)
                    throw 0;
                switch (op)
                {
                case '+':
                    cout << "The addition is " << num_1 + num_2;
                    break;
                case '-':
                    cout << "The Substraction is " << num_1 - num_2;
                    break;
                case '*':
                    cout << "The multiplication is " << num_1 * num_2;
                    break;
                case '/':
                    cout << "The division is " << num_1 / num_2;
                    break;
                default:
                    break;
                }
            }
            else
                throw "Invalid operator.  !! Exception !!";
        }
    }
    catch (int)
    {
        cout << "It is an Exception !!" << endl;
    }
    catch (const char str[50])
    {
        cout << str;
    }
}