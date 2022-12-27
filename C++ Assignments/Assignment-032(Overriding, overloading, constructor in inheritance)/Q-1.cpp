// Define a base class Animals having member function sound() . Define another
// derived class from Animals class named Dogs. You need to override the sound
// function of the base class in the derived class.
#include <iostream>
using namespace std;
class Animals
{
public:
    void sound()
    {
        cout << "Sound of Animals" << endl;
    }
};
class Dogs : public Animals
{
public:
    void sound() // overriding happens here
    {
        cout << "Sound of Dogs" << endl;
    }
};
int main()
{
    Animals a_1;
    a_1.sound();
    Dogs d_1;
    d_1.sound();
    return 0;
}