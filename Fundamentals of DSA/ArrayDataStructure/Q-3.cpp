#include "Q-2.cpp"
int main()
{
    ExtendedArray obj(5);
    obj.append(1);
    obj.append(2);
    obj.append(3);
    obj.append(4);
    obj.append(5);
    obj.swapItems(0, 4);
    for (int i = 0; i < obj.count(); i++)
    {
        cout << obj.get(i) << " ";
    }
    return 0;
}