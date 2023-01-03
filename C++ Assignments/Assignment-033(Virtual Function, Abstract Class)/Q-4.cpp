// Create a base class called Photon. Use this class to store double type value of
// wavelength that could be used to calculate photon energy. Create class
// calculate_photonEnergy which will photon energy.
// Using these classes, calculate photon energy.
#include <iostream>
#include <cmath>
using namespace std;
class Photon
{
protected:
    double waveLength;

public:
    void setWaveLen(double x)
    {
        waveLength = x;
    }
    virtual void display() = 0;
};
class calculate_photonEnergy : public Photon
{
private:
    long double energy;

public:
    void display()
    {
        energy = ((3 * pow(10, 8)) * (6 * pow(10, -34))) / (waveLength * pow(10, -9));
        cout
            << "The Energy of Photon is " << energy << "J";
    }
};
int main()
{
    calculate_photonEnergy e_1; // wavelength units are in nanometers...
    e_1.setWaveLen(1);
    e_1.display();
}