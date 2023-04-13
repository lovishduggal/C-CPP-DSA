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

public:
    SLL()
    {
        start = NULL;
    }
    inline void insertAtStart(int);
    void insertAtEnd(int);
    node *search(int);
    inline void insertAfter(node *, int);
    inline void deleteFirst();
    void deleteLast();
    void deleteNode(node *);
    ~SLL();
};
SLL::~SLL()
{
    while (start)
        deleteFirst();
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
void SLL::deleteLast()
{
    if (start == NULL)
    {
        cout << "Underflow!!";
    }
    else if (start->next == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        node *t = start;
        if (t->next->next != NULL)
        {
            t = t->next;
        }
        delete t->next;
        t->next = NULL;
    }
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
int main()
{
    SLL obj;
    obj.insertAtStart(5);
    obj.deleteNode(obj.search(5));
}