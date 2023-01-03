// Using the concept of pointers, write a function that swaps the private data values of
// two objects of the same class type.
#include <iostream>
using namespace std;
class Base
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    void showData()
    {
        cout << a << " and " << b << endl;
    }
};
void Swap(Base *obj_1, Base *obj_2)
{
    Base temp;
    temp.setData(obj_1->getA(), obj_1->getB());
    obj_1->setData(obj_2->getA(), obj_2->getB());
    obj_2->setData(temp.getA(), temp.getB());
}
int main()
{
    Base obj_1, obj_2;
    obj_1.setData(1234, 5678);
    obj_2.setData(6789, 789);
    Swap(&obj_1, &obj_2);
    obj_1.showData();
    obj_2.showData();
}