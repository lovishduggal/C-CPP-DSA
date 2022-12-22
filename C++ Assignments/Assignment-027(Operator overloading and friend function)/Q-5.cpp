// Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// methods
// };
// Overload the operator unary minus (-) to negate the numbers.
#include <iostream>
using namespace std;
class Numbers
{
private:
    int Num_1;
    int Num_2;
    int Num_3;

public:
    void setNumbers(int x, int y, int z)
    {
        Num_1 = x;
        Num_2 = y;
        Num_3 = z;
    }
    void getNumbers()
    {
        cout << Num_1 << " " << Num_2 << " " << Num_3;
    }
    Numbers operator-()
    {
        Numbers Temp;
        Temp.Num_1 = -Num_1;
        Temp.Num_2 = -Num_2;
        Temp.Num_3 = -Num_3;
        return Temp;
    }
};
int main()
{
    Numbers n_1, n_2;
    n_1.setNumbers(1, 2, 3);
    n_2 = -n_1;
    n_2.getNumbers();
    return 0;
}