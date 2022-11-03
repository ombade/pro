#include <iostream>
#include "queue.cpp"
using namespace std;

int main()
{
    int a = 3;
    // Queue<int> obj(7);

    // obj.queueDisplay();
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueEnqueue(12);
    // obj.queueDisplay();

    // obj.queueDisplay();
    int ch = 0;
    int size = 0;
    int type = 0;
    char element;
    cout << "which data type Queue to de created " << endl;
    cout << "\n1)Interger \n2)Char \n3)Charater \n4)string \n5) dobble\n6)exit " << endl;
    cin >> type;
    switch (type)
    {
    case 1:
    {
        cout << "Enter the Size of the queue to be created" << endl;
        cin >> size;
        Queue<int> obj(size);
        break;
    }

    case 2:
    {
        cout << "Enter the Size of the queue to be created" << endl;
        cin >> size;
        Queue<char> obj(size);
        break;
    }
    default:
        break;
    }

    while (ch != 5)
    {

        cout << "\n\n--------------------\nMENU\n1)Enque\n2)Deque\n3)Display\n4)exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int num = 0;
            cout << "Enter How element to be Enque -> ";
            cin >> num;
            if (type == 1)
            {
                int element;
            }
            else
            {
                char element;
            }

            for (int i = 0; i < num; i++)
            {
                cin >> element;
                obj.queueEnqueue(element);
            }
        }
        break;

        default:
            break;
        }
    }
}