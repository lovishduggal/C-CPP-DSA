#include <iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};

class Dequeue
{
private:
    node *front;
    node *rear;

public:
    Dequeue();
    void insertFront(int);
    void insertRear(int);
    bool isEmpty();
    int getRear();
    int getFront();
    void deleteFront();
    void deleteRear();
    void printElements();
    ~Dequeue();
};

Dequeue::~Dequeue()
{
    while (!isEmpty())
        deleteFront();
}

void Dequeue::printElements()
{
    node *t = front;
    while (t)
    {
        cout << t->item << " ";
        t = t->next;
    }
    cout << "\n";
}

void Dequeue::deleteRear()
{
    if (!isEmpty())
    {
        node *t = rear->prev;
        if (t != NULL)
            t->next = NULL;
        else
            front = NULL;
        delete rear;
        rear = t;
    }
}

void Dequeue::deleteFront()
{
    if (!isEmpty())
    {
        node *t = front->next;
        if (t != NULL)
            t->prev = NULL;
        else
            rear = NULL;
        delete front;
        front = t;
    }
}

int Dequeue::getFront()
{
    if (!isEmpty())
        return front->item;
    cout << "\nDequeue is empty!!";
    return 0;
}

int Dequeue::getRear()
{
    if (!isEmpty())
        return rear->item;
    cout << "\nDequeue is empty!!";
    return 0;
}

bool Dequeue::isEmpty()
{
    return rear == NULL;
}

void Dequeue::insertRear(int data)
{
    node *n = new node;
    n->item = data;
    n->prev = rear;
    n->next = NULL;
    if (rear != NULL)
        rear->next = n;
    else
        front = n;
    rear = n;
}

void Dequeue::insertFront(int data)
{
    node *n = new node;
    n->item = data;
    n->prev = NULL;
    n->next = front;
    if (front != NULL)
        front->prev = n;
    else
        rear = n;
    front = n;
}

Dequeue::Dequeue()
{
    front = NULL;
    rear = NULL;
}
int main()
{
    Dequeue D;
    D.insertRear(10);
    D.insertRear(20);
    D.insertRear(30);
    D.insertRear(40);
    D.printElements();

    D.deleteRear();
    // D.deleteFront();
    // D.deleteFront();

    D.printElements();
    cout << D.getFront() << endl;
    cout << D.getRear() << endl;
    // cout << D.isEmpty();
}