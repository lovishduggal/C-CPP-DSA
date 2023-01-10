/*
Write a program to print all Armstrong numbers between 100 to 500.
Explanation : A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to
the number itself.
E.g.- 370 is an Armstrong number because (27)+(343)+(0) = 370.
Sample Input : Already mentioned (100 to 500)
Sample Output :
153
370
371
407
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Armstrong numbers in the range of 100 to 500 are :" << endl;
    for (int i = 100; i <= 500; ++i)
    {
        int N = i, digit, sum = 0;
        while (N != 0)
        {
            digit = N % 10;
            sum += (digit * digit * digit);
            N = N / 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}