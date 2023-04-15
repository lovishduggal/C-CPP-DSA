#include <iostream>
using namespace std;
class Array
{
private:
    int capacity, lastIndex, *ptr;

public:
    Array(int);
    bool isEmpty();
    inline void append(int element);
    void insert(int, int);
    inline void edit(int, int);
    void del(int);
    inline bool isFull();
    inline int get(int);
    inline int count();
    int search(int);
    int getCap()
    {
        return capacity;
    }
    ~Array();
};
Array::~Array()
{
    delete[] ptr;
}
int Array::search(int element)
{
    int i;
    for (i = 0; i <= lastIndex; i++)
    {
        if (*(ptr + i) == element)
        {
            return i;
        }
    }
    return -1;
}
int Array::count()
{
    return lastIndex + 1;
}
int Array::get(int indexNo)
{
    if (isEmpty())
    {
        cout << "Array is Empty" << endl;
    }
    else if (indexNo >= 0 && indexNo <= lastIndex)
        return ptr[indexNo]; // *(ptr+indexNo)
    else
        cout << "Invalid index" << endl;
    return -1;
}
bool Array::isFull()
{
    return lastIndex == capacity - 1;
}
void Array::del(int indexNo)
{
    if (isEmpty())
    {
        cout << "Array is Empty" << endl;
    }
    else if (indexNo >= 0 && indexNo <= lastIndex)
    {
        for (int i = indexNo; i < lastIndex; i++)
        {
            *(ptr + i) = *(ptr + (i + 1));
        }
        --lastIndex;
    }
}
void Array::edit(int indexNo, int element)
{
    if (indexNo >= 0 && indexNo <= lastIndex)
    {
        *(ptr + indexNo) = element;
    }
    else
    {
        cout << "Invalid Index" << endl;
    }
}
void Array::insert(int indexNo, int element)
{
    int i;
    if (lastIndex == capacity - 1)
    {
        cout << "Array is full" << endl;
    }
    else if (indexNo < 0 || indexNo > lastIndex + 1)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        for (i = lastIndex; i >= indexNo; i--)
        {
            ptr[i + 1] = ptr[i];
        }
        ptr[indexNo] = element;
        lastIndex++;
    }
}
void Array::append(int element)
{
    if (lastIndex == capacity - 1)
    {
        cout << "Array is full" << endl;
    }
    else
    {
        *(ptr + ++lastIndex) = element;
    }
}
bool Array::isEmpty()
{
    return lastIndex == -1;
}
Array::Array(int size)
{
    capacity = size;
    lastIndex = -1;
    ptr = new int[size];
}
