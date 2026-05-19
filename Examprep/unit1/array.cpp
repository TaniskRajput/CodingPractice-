#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}
void insertAti(int arr[], int elem, int s, int pos)
{
    for (int i = s - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = elem;
}
void del(int arr[], int s, int pos)
{
    for (int i = pos; i < s; i++)
    {
        arr[i] = arr[i + 1];
    }
    s--;
}
int main()
{
    int arr[100];
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);

    insertAti(arr, 5, n, 2);
    n++;
    cout << "/nAfter Inserting:";
    printArray(arr, n);

    del(arr, n, 2);
    cout << "/nAfter Deleting:";
    printArray(arr, n - 1);
    return 0;
}
