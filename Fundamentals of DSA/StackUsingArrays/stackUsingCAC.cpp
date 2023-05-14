#include "charArrayClass.cpp"
class STACK : private Array
{
public:
    STACK(int);
    void push(int);
    char peek();
    void pop();
    virtual bool isFull();
    virtual bool isEmpty();
    int getCap();
    ~STACK();
};
STACK::~STACK(){};
int STACK::getCap()
{
    return Array::getCap();
}
bool STACK::isEmpty()
{
    return Array::isEmpty();
}
bool STACK::isFull()
{
    return Array::isFull();
}
void STACK::pop()
{
    if (isEmpty())
        cout << "UnderFlow" << endl;
    else
        del(count() - 1);
}
char STACK::peek()
{
    if (!isEmpty()) //* if stack is not empty
        return get(count() - 1);
    return -1;
}
void STACK::push(int data)
{
    if (isFull())
        cout << "STACK is overFlow" << endl;
    else
        append(data);
}
STACK::STACK(int capacity) : Array(capacity){};
