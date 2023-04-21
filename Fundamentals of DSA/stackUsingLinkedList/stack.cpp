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
    deleteFirst();
}
int STACK::peek()
{
    if (getStart())
        return getStart()->item;
    else
        cout << "STACK is Empty ";
    return 0;
}
void STACK::push(int data)
{
    insertAtStart(data);
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
bool isPalindrome(STACK origStack)
{
    STACK temp = origStack;
    reverse(temp);
    while (origStack.getStartAddress())
    {
        if (!(origStack.peek() == temp.peek()))
        {
            return false;
        }
        origStack.pop();
        temp.pop();
    }
    return true;
}
int main()
{
    STACK obj;
    obj.push('a');
    obj.push('b');
    obj.push('a');
    cout << isPalindrome(obj);
    obj.printStack();
}