#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. get the front node and pop it
        Node *f = q.front();
        q.pop();

        // 2. print the value of the front node
        cout << f->val << " ";

        // 3. push the left child of the front node into the queue
        if (f->left)
            q.push(f->left);

        // 4. push the right child of the front node into the queue
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(9);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(9);
    Node *f = new Node(5);
    Node *g = new Node(11);
    Node *h = new Node(5);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    d->left = f;
    d->right = g;
    e->right = h;

    levelOrderTraversal(root);

    return 0;
}