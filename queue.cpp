#include <iostream>

using namespace std;
template <typename t>
class Queue
{
public:
    t front, rear, capacity;
    int *queue;
    t arr[];
    Queue(int c)
    {
        front = rear = 0;
        capacity = c;
        queue = new int;
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