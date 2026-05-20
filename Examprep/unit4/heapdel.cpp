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

        arr[size] = value;
        int index = size;
        size++;

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
                break;
            }
        }
    }

    void deleteHeap()
    {

        if (size == 0)
        {
            cout << "Heap is Empty\n";
            return;
        }

        cout << "Deleted Element: " << arr[0] << endl;

        // Replace root with last element
        arr[0] = arr[size - 1];

        size--;

        int index = 0;

        // Heapify Down
        while (index < size)
        {

            int left = 2 * index + 1;
            int right = 2 * index + 2;

            int largest = index;

            if (left < size && arr[left] > arr[largest])
            {
                largest = left;
            }

            if (right < size && arr[right] > arr[largest])
            {
                largest = right;
            }

            if (largest != index)
            {
                swap(arr[index], arr[largest]);
                index = largest;
            }
            else
            {
                break;
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

    h.deleteHeap();

    h.display();

    return 0;
}