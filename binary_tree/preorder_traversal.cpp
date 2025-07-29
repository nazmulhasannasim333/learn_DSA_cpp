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

void preorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(2);
    Node *c = new Node(6);
    Node *d = new Node(5);
    Node *e = new Node(11);
    Node *f = new Node(9);
    Node *g = new Node(9);
    Node *h = new Node(5);

    root->left = a;
    a->left = b;
    a->right = c;
    c->left = d;
    c->right = e;
    root->right = f;
    f->left = g;
    g->left = h;

    preorderTraversal(root);

    return 0;
}