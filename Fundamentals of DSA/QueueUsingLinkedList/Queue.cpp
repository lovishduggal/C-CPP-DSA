#include <iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class Queue
{
private:
    node *front;
    node *rear;

public:
    Queue();
    void insertAtRear(int);
    int viewRear();
    int viewFront();
    void deleteFront();
    int count();
    ~Queue();
};
Queue::~Queue()
{
    while (front)
    {
        deleteFront();
    }
}

int Queue::count()
{
    int count = 0;
    node *t = front;
    while (t != NULL)
    {
        count++;
        t = t->next;
    }
    return count;
}

void Queue::deleteFront()
{
    if (front)
    {
        if (front->next == NULL)
        {
            delete front;
            front = NULL;
            rear = NULL;
        }
        else
        {
            node *t = front->next;
            delete front;
            front = t;
        }
    }
}

int Queue::viewFront()
{
    if (rear == NULL)
    {
        cout << "\nQueue is empty";
        return 0;
    }
    return front->item;
}

int Queue::viewRear()
{
    if (rear == NULL)
    {
        cout << "\nQueue is empty";
        return 0;
    }
    return rear->item;
}

void Queue::insertAtRear(int data)
{
    node *n = new node;
    n->item = data;
    if (front == NULL && rear == NULL)
    {
        front = rear = n;
        front->next = NULL;
    }
    else
    {
        n->next = NULL;
        rear = rear->next = n;
    }
}
Queue::Queue()
{
    front = NULL;
    rear = NULL;
}
int main()
{
    Queue Q;
    // Q.insertAtRear(10);
    // Q.insertAtRear(20);
    // Q.insertAtRear(30);
    // Q.insertAtRear(40);
    // Q.insertAtRear(50);
    cout << Q.count();
    // Q.deleteFront();
    // Q.deleteFront();
    // Q.deleteFront();
    // Q.deleteFront();
    // Q.deleteFront();
    // cout << Q.viewFront();
}
