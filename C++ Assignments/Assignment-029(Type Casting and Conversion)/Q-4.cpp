// Create a Rupee class and convert it into int. And Display it.

// Example-
// int main()

// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }
#include <iostream>
using namespace std;
class Rupee
{
private:
    int rup;

public:
    void setRup(int x)
    {
        rup = x;
    }
    int getRup()
    {
        return rup;
    }
    Rupee(int r)
    {
        rup = r;
    }
    operator int()
    {
        return rup;
    }
};
int main()
{
    Rupee r = 140;
    int x = r;
    cout << x;
    return 0;
}