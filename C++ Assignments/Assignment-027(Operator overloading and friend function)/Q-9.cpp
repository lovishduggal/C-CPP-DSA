// Class Matrix
// {
// int a[3][3];
// Public:
// methods;
// };
// 1.Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
// 2.Overload the - (Unary) should negate the numbers stored in the object.
#include <iostream>
using namespace std;
class Matrix
{
private:
    int arr[3][3];

public:
    friend istream &operator>>(istream &, Matrix &);
    friend ostream &operator<<(ostream &, Matrix);
    Matrix operator+(Matrix);
    Matrix operator-();
};
istream &operator>>(istream &is, Matrix &M)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            is >> M.arr[i][j];
        }
    }
    return is;
}
ostream &operator<<(ostream &os, Matrix M)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            os << M.arr[i][j] << " ";
        }
        cout << '\n'; // os is another name of cout obj
    }
    return os;
}
Matrix Matrix::operator+(Matrix M)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            M.arr[i][j] = arr[i][j] + M.arr[i][j];
        }
    }
    return M;
}
Matrix Matrix::operator-()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[i][j] = -arr[i][j];
        }
    }
    return *this;
}
int main()
{
    Matrix m_1, m_2, m_3;
    cout << "Enter Matrix-1:" << endl;
    cin >> m_1;
    cout << "Enter Matrix-2:" << endl;
    cin >> m_2;
    cout << m_2;
    cout << "The addition of Matrix is :" << endl;
    m_3 = m_1 + m_2;
    cout << -m_3;
    return 0;
}