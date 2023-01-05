/*
?Write a C++ program to find size of basic data types.
*Sample Output :
*Size of fundamental data types :
*The sizeof(char) : 1 bytes
*The sizeof(short) : 2 bytes
*The sizeof(int) : 4 bytes
*The sizeof(long): 4 bytes
*The sizeof(long long) : 8 bytes
*The sizeof(float) : 4 bytes
*The sizeof(double) : 8 bytes
*The sizeof(long double) : 12 bytes
*The sizeof(bool) : 1 bytes
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Size of fundamental data types : " << endl;
    cout << "Size of char data type         : " << sizeof(char) << endl;
    cout << "Size of short data type        : " << sizeof(short) << endl;
    cout << "Size of int data type          : " << sizeof(int) << endl;
    cout << "Size of long data type         : " << sizeof(long) << endl;
    cout << "Size of long long data type    : " << sizeof(long long) << endl;
    cout << "Size of float data type        : " << sizeof(float) << endl;
    cout << "Size of double data type       : " << sizeof(double) << endl;
    cout << "Size of long double data type  : " << sizeof(long double) << endl;
    cout << "Size of bool data type         : " << sizeof(bool) << endl;
    return 0;
}
