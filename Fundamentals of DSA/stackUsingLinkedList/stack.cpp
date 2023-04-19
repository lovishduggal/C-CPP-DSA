#include "SLL.cpp"
class STACK : private SLL
{
public:
    STACK();
    void push(int);
    int peek();
    void pop();
    node *getStartAddress();
    void printStack();
};
void STACK::printStack()
{
    node *t = getStart();
    while (t != NULL)
    {
        cout << t->item << " ";
        t = t->next;
    }
}

node *STACK::getStartAddress()
{
    return SLL::getStartAdd();
}

void STACK::pop()
{
    deleteLastNode();
}
int STACK::peek()
{
    if (getStart())
    {
        node *t = getStart();
        while (t->next != NULL)
            t = t->next;
        return t->item;
    }
    else
    {
        cout << "STACK is Empty ";
    }
    return 0;
}
void STACK::push(int data)
{
    insertAtEnd(data);
}
STACK::STACK() : SLL(){};
void reverse(STACK &origStack)
{
    STACK temp;
    while (origStack.getStartAddress())
    {
        temp.push(origStack.peek());
        origStack.pop();
    }
    origStack = temp;
}
int main()
{
    STACK obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    STACK obj1 = obj;
    obj1.printStack();
}