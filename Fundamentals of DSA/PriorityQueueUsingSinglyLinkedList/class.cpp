#include <iostream>
using namespace std;
struct node
{
    int priorityNo;
    int item;
    node *next;
};
class PriorityQueue
{
private:
    node *start;

public:
    PriorityQueue();
    void insert(int, int);
};
void PriorityQueue::insert(int priority, int data)
{
    node *n = new node;
    n->item = data;
    n->priorityNo = priority;
    if (start == NULL)
    {
        n->next = NULL;
        start = n;
    }
    else
    {
        if (n->priorityNo > start->priorityNo)
        {
            n->next = start;
            start = n;
        }
        else
        {
            node *t = start;
            while (t->next != NULL)
            {
                if (t->next->priorityNo > n->priorityNo)
                    t = t->next;
                else
                    break;
            }
            n->next = t->next;
            t->next = n;
        }
    }
}
PriorityQueue::PriorityQueue()
{
    start = NULL;
}
int main()
{
}