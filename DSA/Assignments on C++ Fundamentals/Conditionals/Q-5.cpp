// Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.
// Sample Input :
// Enter an operator (+, -, *, /): -
// Enter two numbers:
// 6
// 8
// Sample Output : 6 - 8 = -2
#include <iostream>
using namespace std;
int main()
{
    char op;
    float num_1, num_2, result;
    cout << "Enter an operator (+, -, *, /) : ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Enter two number : ";
        cin >> num_1 >> num_2;
        result = num_1 + num_2;
        cout << num_1 << " + " << num_2 << " = " << result;
        break;
    case '-':
        cout << "Enter two number : ";
        cin >> num_1 >> num_2;
        result = num_1 - num_2;
        cout << num_1 << " - " << num_2 << " = " << result;
        break;
    case '*':
        cout << "Enter two number : ";
        cin >> num_1 >> num_2;
        result = num_1 * num_2;
        cout << num_1 << " * " << num_2 << " = " << result;
        break;
    case '/':
        cout << "Enter two number : ";
        cin >> num_1 >> num_2;
        result = num_1 / num_2;
        cout << num_1 << " / " << num_2 << " = " << result;
        break;

    default:
        cout << "Invalid op !!" << endl;
        break;
    }
    return 0;
}