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
    void reverseStack();
    ~STACK();
};
STACK::~STACK(){};
void STACK::reverseStack()
{
    if (!isEmpty())
    {
        int *t = new int[getCap()];
        for (int i = count() - 1, j = 0; i >= 0; i--, j++)
            t[j] = get(i);
        setPtr(t);
        t = NULL;
    }
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
int main()
{
    STACK S(6);
    STACK minValStack(6);
    pushInStack(S, minValStack, 5);
    pushInStack(S, minValStack, 4);
    pushInStack(S, minValStack, 6);
    pushInStack(S, minValStack, 2);
    pushInStack(S, minValStack, 10);
    popFromStack(S, minValStack);
    popFromStack(S, minValStack);
    popFromStack(S, minValStack);
    popFromStack(S, minValStack);
    cout << minValStack.peek();
}