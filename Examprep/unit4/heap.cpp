#include <iostream>
using namespace std;

class MaxHeap
{
    int arr[100];
    int size;

public:
    MaxHeap()
    {
        size = 0;
    }

    void insert(int value)
    {

        // Insert at end
        arr[size] = value;

        int index = size;
        size++;

        // Heapify Up
        while (index > 0)
        {

            int parent = (index - 1) / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    MaxHeap h;

    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(60);

    h.display();

    return 0;
}