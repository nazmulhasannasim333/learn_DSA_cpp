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

Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *leftChild, *rightChild;
        if (l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);

        if (r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);

        p->left = leftChild;
        p->right = rightChild;

        if (p->left)
            q.push(leftChild);
        if (p->right)
            q.push(rightChild);
    }
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;
    if (val < root->val)
        return search(root->left, val);
    else
        return search(root->right, val);
}

int main()
{
    Node *root = inputTree();
    int val;
    cin >> val;
    if (search(root, val))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}