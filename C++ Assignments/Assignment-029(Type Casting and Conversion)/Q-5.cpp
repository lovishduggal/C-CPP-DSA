// Create a Dollar class and add necessary functions to support int to Dollar type conversion.

// Example-
// int main()

// {
// int x = 50;
// Dollar d;
// d = x;
// d.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Dollor
{
private:
    float dol;

public:
    void setDol(int d)
    {
        dol = d;
    }
    float getDol()
    {
        return dol;
    }
    Dollor(int x)
    {
        dol = x;
    }
    Dollor() {}
};
int main()
{
    int x = 510;
    Dollor d(200);
    d = x;
    cout << d.getDol();
}