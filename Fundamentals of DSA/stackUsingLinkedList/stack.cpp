#include "SLL.cpp"
class STACK : private SLL
{
public:
    STACK();
    void push(int);
    int peek();
    void pop();
    void reverse();
};
//! This method cause memory leak
void STACK::reverse()
{
    if (getStart())
    {
        SLL *t = new SLL();
        while (getStart())
        {
            t->insertAtEnd(peek());
            pop();
        }
        setStart(t->getStartAdd());
    }
}
void STACK::pop()
{
    deleteLast();
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
int main()
{
    STACK obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.reverse();
    cout << obj.peek();
}