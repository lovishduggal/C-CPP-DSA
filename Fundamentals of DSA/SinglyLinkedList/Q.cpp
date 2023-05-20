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
    int count();
    void reverse();
    void print();
    node *middleNode();
    ~SLL();
};
SLL::~SLL()
{
    while (start)
        deleteFirst();
}

//! understand the below logic:
node *SLL::middleNode()
{
    if (start == NULL)
        return NULL;
    int middleNodeNum = (count() / 2) + 1, c = 0;
    node *t = start;
    while (t != NULL)
    {
        if (++c == middleNodeNum)
            return t;
        t = t->next;
    }
    //* OR
    // if (start == NULL)
    //     return NULL;
    // node *slow = start, *fast = start;
    // while (fast && fast->next)
    // {
    //     slow = slow->next;
    //     fast = fast->next->next;
    // }
    // return slow;
}

void SLL::print()
{
    node *t = start;
    while (t)
    {
        cout << t->item << " ";
        t = t->next;
    }
    cout << endl;
}

void SLL::reverse()
{
    node *temp = start;
    start = NULL;
    while (temp)
    {
        node *next = temp->next;
        temp->next = start;
        start = temp;
        temp = next;
    }
}

int SLL::count()
{
    int c = 0;
    node *t = start;
    while (t != NULL)
    {
        c++;
        t = t->next;
    }
    return c;
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
    SLL sll;
    sll.insertAtEnd(1);
    sll.insertAtEnd(2);
    sll.insertAtEnd(3);
    sll.insertAtEnd(4);
    sll.insertAtEnd(5);
    sll.insertAtEnd(6);
    sll.insertAtEnd(7);
    sll.insertAtEnd(8);
    sll.insertAtEnd(9);
    sll.insertAtEnd(10);
    sll.insertAtEnd(11);
    sll.insertAtEnd(12);
    sll.insertAtEnd(13);
    // sll.print();
    // sll.reverse();
    // sll.print();
    cout << sll.middleNode()->item << endl;
}