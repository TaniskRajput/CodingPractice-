#include <iostream>
using namespace std;

class Queue
{
    int arr[5];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    // Enqueue Operation
    void enqueue(int value)
    {
        // Check overflow
        if (rear == 4)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        // First element insertion
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        arr[rear] = value;

        cout << value << " inserted" << endl;
    }

    // Dequeue Operation
    void dequeue()
    {
        // Check underflow
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        cout << arr[front] << " deleted" << endl;

        front++;

        // Reset queue
        if (front > rear)
        {
            front = rear = -1;
        }
    }

    // Display Queue
    void display()
    {
        if (front == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        cout << "Queue Elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Front Element
    void peek()
    {
        if (front == -1)
        {
            cout << "Queue Empty" << endl;
        }
        else
        {
            cout << "Front Element: " << arr[front] << endl;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    q.peek();

    return 0;
}