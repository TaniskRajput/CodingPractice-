#include <iostream>
using namespace std;
class Node
{
    int data;
    Node *next;

public:
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};
class stack
{
    Node *top;

public:
    stack()
    {
        top = nullptr;
    }
    void push(int x)
    {
        Node *newnode = new Node(x);
        newnode->next = top;
        top = newnode;
        cout << x << " pushed in the stack." << x << endl;
    }
    void pop()
    {
        Node *temp = top;
        cout << "Deleted Node:" << top->data;
        top = top->next;
        delete temp;
    }
}