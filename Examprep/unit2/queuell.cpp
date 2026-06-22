#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    // Enqueue
    void enqueue(int value)
    {
        Node *newNode = new Node(value);

        // If queue empty
        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted" << endl;
    }

    // Dequeue
    void dequeue()
    {
        // Underflow
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node *temp = front;

        cout << front->data << " deleted" << endl;

        front = front->next;

        // If queue becomes empty
        if (front == NULL)
        {
            rear = NULL;
        }

        delete temp;
    }

    // Display
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is Empty" << endl;
            return;
        }

        Node *temp = front;

        cout << "Queue Elements: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Peek
    void peek()
    {
        if (front == NULL)
        {
            cout << "Queue Empty" << endl;
        }
        else
        {
            cout << "Front Element: "
                 << front->data << endl;
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);

    q.display();

    q.dequeue();

    q.display();

    q.peek();

    return 0;
}