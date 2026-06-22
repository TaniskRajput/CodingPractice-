#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    int height;

    Node(int val)
    {
        data = val;
        left = right = NULL;
        height = 1;
    }
};

class AVL
{
public:
    // Get height
    int getHeight(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        return root->height;
    }

    // Get balance factor
    int getBalance(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }

        return getHeight(root->left) - getHeight(root->right);
    }

    // Right Rotation
    Node *rightRotate(Node *y)
    {
        Node *x = y->left;
        Node *T2 = x->right;

        // Rotation
        x->right = y;
        y->left = T2;

        // Update heights
        y->height = max(getHeight(y->left),
                        getHeight(y->right)) +
                    1;

        x->height = max(getHeight(x->left),
                        getHeight(x->right)) +
                    1;

        return x;
    }

    // Left Rotation
    Node *leftRotate(Node *x)
    {
        Node *y = x->right;
        Node *T2 = y->left;

        // Rotation
        y->left = x;
        x->right = T2;

        // Update heights
        x->height = max(getHeight(x->left),
                        getHeight(x->right)) +
                    1;

        y->height = max(getHeight(y->left),
                        getHeight(y->right)) +
                    1;

        return y;
    }

    // Insert Node
    Node *insert(Node *root, int key)
    {
        // Normal BST insertion
        if (root == NULL)
        {
            return new Node(key);
        }

        if (key < root->data)
        {
            root->left = insert(root->left, key);
        }
        else if (key > root->data)
        {
            root->right = insert(root->right, key);
        }
        else
        {
            return root;
        }

        // Update height
        root->height =
            1 + max(getHeight(root->left),
                    getHeight(root->right));

        // Get balance factor
        int balance = getBalance(root);

        // LL Case
        if (balance > 1 &&
            key < root->left->data)
        {
            return rightRotate(root);
        }

        // RR Case
        if (balance < -1 &&
            key > root->right->data)
        {
            return leftRotate(root);
        }

        // LR Case
        if (balance > 1 &&
            key > root->left->data)
        {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        // RL Case
        if (balance < -1 &&
            key < root->right->data)
        {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }

        return root;
    }

    // Inorder Traversal
    void inorder(Node *root)
    {
        if (root != NULL)
        {
            inorder(root->left);

            cout << root->data << " ";

            inorder(root->right);
        }
    }
};

int main()
{
    AVL tree;

    Node *root = NULL;

    root = tree.insert(root, 10);
    root = tree.insert(root, 20);
    root = tree.insert(root, 30);
    root = tree.insert(root, 40);
    root = tree.insert(root, 50);
    root = tree.insert(root, 25);

    cout << "Inorder Traversal: ";

    tree.inorder(root);

    return 0;
}
