#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 5, 1};
    int hash[10] = {0}; // Hash table

    // Store frequency
    for (int i = 0; i < 7; i++)
    {
        hash[arr[i]]++;
    }

    // Print frequencies
    for (int i = 0; i < 10; i++)
    {
        if (hash[i] != 0)
        {
            cout << i << " occurs "
                 << hash[i] << " times" << endl;
        }
    }

    return 0;
}