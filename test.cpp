#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename t>
class Queue
{
public:
    t front, rear, capacity;
    t *queue;
    t arr[];
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new t;
    }

    // ~Queue() { delete[] queue; }

    void queueEnqueue(t data)
    {

        if (capacity == rear)
        {
            cout << ("\nQueue is full\n");
            return;
        }

        else
        {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    void queueDequeue()
    {
        // if queue is empt y
        if (front == rear)
        {
            cout << ("\nQueue is  empt y\n");
            return;
        }

        else
        {
            for (t i = 0; i < rear - 1; i++)
            {
                queue[i] = queue[i + 1];
            }

            rear--;
        }
        return;
    }

    void queueDisplay()
    {
        t i;
        if (front == rear)
        {
            cout << ("\nQueue is Empty\n");
            return;
        }

        for (i = front; i < rear; i++)
        {
            cout << queue[i] << "\t";
        }
        return;
    }

    void queueFront()
    {
        if (front == rear)
        {
            cout << ("\nQueue is Empty\n");
            return;
        }
        cout << ("\nFront  Element  is: %d", queue[front]);
    }
};
int main()
{
    int size = 0;
    cout << "Enter the Size of the queue to be created" << endl;
    cin >> size;
    Queue<string> obj(size);
    // Queue<int> obj(7);

    obj.queueDisplay();
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue('s');
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12.88);
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");
    obj.queueEnqueue("dip");

    obj.queueDisplay();
}