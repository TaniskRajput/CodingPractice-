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

class HashTable
{
    static const int SIZE = 10;

    Node *table[SIZE];

public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            table[i] = NULL;
        }
    }

    // Hash Function
    int hashFunction(int key)
    {
        return key % SIZE;
    }

    // Insert
    void insert(int key)
    {
        int index = hashFunction(key);

        Node *newNode = new Node(key);

        if (table[index] == NULL)
        {
            table[index] = newNode;
        }
        else
        {
            Node *temp = table[index];

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    // Search
    bool search(int key)
    {
        int index = hashFunction(key);

        Node *temp = table[index];

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return true;
            }

            temp = temp->next;
        }

        return false;
    }

    // Display
    void display()
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << i << " -> ";

            Node *temp = table[i];

            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }

            cout << "NULL" << endl;
        }
    }
};

int main()
{
    HashTable h;

    h.insert(15);
    h.insert(25);
    h.insert(35);
    h.insert(12);

    h.display();

    if (h.search(25))
    {
        cout << "25 Found" << endl;
    }
    else
    {
        cout << "25 Not Found" << endl;
    }

    return 0;
}