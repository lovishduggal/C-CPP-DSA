#include "arrayClass.cpp"
class STACK : private Array
{
public:
    STACK(int);
    void push(int);
    int peek();
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
int STACK::peek()
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
void pushInStack(STACK &S, STACK &minValStack, int data)
{
    S.push(data);
    if (minValStack.isEmpty())
    {
        minValStack.push(data);
    }
    else
    {
        if (data > minValStack.peek())
            minValStack.push(minValStack.peek());
        else
            minValStack.push(data);
    }
}
void popFromStack(STACK &S, STACK &minValStack)
{
    S.pop();
    minValStack.pop();
}
void reverseStack(STACK &origStack)
{
    STACK temp(origStack.getCap());
    while (!origStack.isEmpty())
    {
        temp.push(origStack.peek());
        origStack.pop();
    };
    origStack = temp; //* bug : leakage of memory
}
int main()
{
    STACK obj(5);
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(30);
    STACK obj1 = obj;
    cout << obj.peek() << " : " << obj1.peek() << endl;
    obj1.push(100);
    cout << obj.peek() << " : " << obj1.peek() << endl;
}