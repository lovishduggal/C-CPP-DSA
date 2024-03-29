#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class SLL
{
private:
    node *start;

protected:
    void setStart(node *add)
    {
        start = add;
    }
    node *getStart()
    {
        return start;
    }

public:
    SLL()
    {
        start = NULL;
    }
    SLL(SLL &);
    node *getStartAdd()
    {
        return start;
    }
    inline void insertAtStart(int);
    void insertAtEnd(int);
    node *search(int);
    inline void insertAfter(node *, int);
    inline void deleteFirst();
    void deleteLastNode();
    void deleteNode(node *);
    void operator=(SLL &);
    ~SLL();
};
SLL::~SLL()
{
    while (start)
        deleteFirst();
}
void SLL::operator=(SLL &obj)
{
    if (start)
    {
        while (start)
        {
            deleteFirst();
        }
    }
    if (obj.start)
    {
        node *t = obj.start;
        while (t != NULL)
        {
            insertAtEnd(t->item);
            t = t->next;
        }
    }
}
void SLL::deleteNode(node *ptr)
{
    if (start == NULL)
    {
        cout << "Underflow!!";
    }
    else
    {
        if (ptr)
        {
            if (start == ptr)
            {
                start = NULL;
                delete ptr;
                ptr = NULL;
            }
            else
            {
                node *t = start;
                while (t->next != ptr)
                {
                    t = t->next;
                }
                t->next = ptr->next;
                delete ptr;
            }
        }
    }
}
void SLL::deleteLastNode()
{
    if (start == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    if (start->next == NULL)
    {
        delete start;
        start = NULL;
        return;
    }
    node *temp = start;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void SLL::deleteFirst()
{
    if (start)
    {
        node *t = start->next;
        delete start;
        start = t;
    }
}

void SLL::insertAfter(node *ptr, int data)
{
    if (start && ptr)
    {
        node *n = new node;
        n->item = data;
        n->next = ptr->next;
        ptr->next = n;
    }
    else
    {
        cout << "Underflow or item is not founded!!";
    }
}
node *SLL::search(int data)
{
    node *t = start;
    while (t != NULL)
    {
        if (t->item == data)
        {
            return t;
        }
        t = t->next;
    }
    return NULL;
}

void SLL::insertAtEnd(int data)
{
    node *n = new node, *t = start;
    n->item = data;
    n->next = NULL;
    if (start == NULL)
    {
        start = n;
    }
    else
    {
        while (t->next != NULL)
        {
            t = t->next;
        }
        t->next = n;
    }
}
void SLL::insertAtStart(int data)
{
    node *n = new node;
    n->item = data;
    n->next = start;
    start = n;
}
SLL::SLL(SLL &obj)
{
    start = NULL;
    if (obj.start)
    {
        node *t = obj.start;
        while (t != NULL)
        {
            insertAtEnd(t->item);
            t = t->next;
        }
    }
}