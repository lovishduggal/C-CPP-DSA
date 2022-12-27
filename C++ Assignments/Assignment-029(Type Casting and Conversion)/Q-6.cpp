// Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.

// Example-
// int main()

// {
// Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Dollor
{
private:
    float dol;

public:
    void setDol(float d)
    {
        dol = d;
    }
    float getDol()
    {
        return dol;
    }
    Dollor(float x)
    {
        dol = x;
    }
    Dollor() {}
};
class Rupee
{
private:
    float rup;

public:
    void setRup(float x)
    {
        rup = x;
    }
    float getRup()
    {
        return rup;
    }
    Rupee(Dollor D)
    {
        rup = (D.getDol()) * 82.82;
    }
    operator Dollor()
    {
        return rup * 0.012;
    }
    Rupee(float x)
    {
        rup = x;
    }
};
int main()
{
    Rupee r = 1000;
    Dollor d = r;
    cout << d.getDol() << endl;
    cout << r.getRup() << endl;
    r = d;
    cout << d.getDol() << endl;
    cout << r.getRup() << endl;
    return 0;
}