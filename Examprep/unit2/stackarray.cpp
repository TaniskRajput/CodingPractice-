#include <iostream>
using namespace std;
#define SIZE 10
class stack
{
    int top;
    int arr[SIZE];

public:
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        cout << "Element inserted." << endl;
        top++;
        arr[top] = x;
    }
    void pop()
    {
        cout << arr[top] << " is deleted." << endl;
        top--;
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    void peek()
    {
        cout << arr[top];
    }
};
int main()
{
    stack s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();
    s.pop();
    s.peek();
    s.display();
}