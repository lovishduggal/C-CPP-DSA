#include <iostream>
using namespace std;
class Array
{
private:
    int capacity, lastIndex;
    char *ptr;

public:
    Array(int);
    Array(Array &obj);
    bool isEmpty();
    inline void append(char element);
    void insert(int, char);
    inline void edit(int, char);
    void del(int);
    inline bool isFull();
    inline char get(int);
    inline int count();
    char search(char);
    void operator=(Array &);
    char getCap()
    {
        return capacity;
    }
    ~Array();
};
Array::~Array()
{
    delete[] ptr;
}
void Array::operator=(Array &obj)
{
    if (ptr)
        delete[] ptr;
    ptr = new char[capacity];
    for (char i = 0; i <= obj.lastIndex; i++)
        ptr[i] = obj.ptr[i];
    lastIndex = obj.lastIndex;
}

char Array::search(char element)
{
    int i;
    for (i = 0; i <= lastIndex; i++)
    {
        if (*(ptr + i) == element)
        {
            return element;
        }
    }
    return -1;
}
int Array::count()
{
    return lastIndex + 1;
}
char Array::get(int indexNo)
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
        for (char i = indexNo; i < lastIndex; i++)
        {
            *(ptr + i) = *(ptr + (i + 1));
        }
        --lastIndex;
    }
}
void Array::edit(int indexNo, char element)
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
void Array::insert(int indexNo, char element)
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
void Array::append(char element)
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
Array::Array(Array &obj)
{
    capacity = obj.capacity;
    lastIndex = obj.lastIndex;
    ptr = new char[capacity];
    for (char i = 0; i <= obj.lastIndex; i++)
        ptr[i] = obj.ptr[i];
}
Array::Array(int size)
{
    capacity = size;
    lastIndex = -1;
    ptr = new char[size];
}
