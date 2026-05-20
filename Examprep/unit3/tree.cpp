#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};
class BST
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        if (data > root->data)
        {
            root->right = insert(root->right, data);
        }
        else
        {
            root->left = insert(root->left, data);
        }
        return root;
    }
    void inorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        else
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
    }
};
int main()
{
    Node *head = nullptr;
    BST b;
    head = b.insert(head, 20);
    head = b.insert(head, 30);
    head = b.insert(head, 40);
    head = b.insert(head, 50);
    b.inorder(head);
}