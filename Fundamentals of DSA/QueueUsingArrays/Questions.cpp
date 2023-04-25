#include <iostream>
using namespace std;
class QUEUE
{
private:
    int capacity, front, rear;
    int *ptr;

public:
    QUEUE(int);
    void insertAtRear(int);
    int getRear();
    int getFront();
    void deleteFromFront();
};

void QUEUE::deleteFromFront()
{
    if (front == rear && front != -1 && rear != -1)
    {
        front = -1;
        rear = -1;
    }
    else if (front == capacity - 1)
    {
        front = 0;
    }
    else if (front == -1 && rear == -1)
    {
        cout << "\nQueue is Underflow!!";
    }
    else
    {
        ++front;
    }
}

int QUEUE::getFront()
{
    if (front == -1 && rear == -1)
    {
        cout << "\nQUEUE is Empty ";
        return 0;
    }
    return ptr[front];
}

int QUEUE::getRear()
{
    if (front == -1 && rear == -1)
    {
        cout << "\nQUEUE is Empty ";
        return 0;
    }
    return ptr[rear];
}

void QUEUE::insertAtRear(int data)
{
    if (front == -1 && rear == -1)
    {
        ++front;
        ptr[++rear] = data;
    }
    else if ((front == 0 && rear == capacity - 1) || (front - 1 == rear))
    {
        cout << "\nQueue is overflow!!";
    }
    else if (front > 0 && rear == capacity - 1)
    {
        rear = 0;
        ptr[rear] = data;
    }
    else
    {
        ptr[++rear] = data;
    }
}

QUEUE::QUEUE(int cap)
{
    capacity = cap;
    front = -1;
    rear = -1;
    ptr = new int[cap];
}

int main()
{
    QUEUE Q(5);
    Q.insertAtRear(10);
    Q.insertAtRear(20);
    Q.insertAtRear(30);
    Q.deleteFromFront();
    Q.insertAtRear(40);
    Q.insertAtRear(50);
    Q.insertAtRear(60);
    Q.insertAtRear(70);
    cout
        << Q.getFront() << endl;
    cout << Q.getRear() << endl;
    return 0;
}