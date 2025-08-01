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

void printLeftNodes(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
        printLeftNodes(root->left);
    else if (root->right)
        printLeftNodes(root->right);
    cout << root->val << " ";
}

void printRightNodes(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
        printRightNodes(root->right);
    else if (root->left)
        printRightNodes(root->left);
}

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

int main()
{
    Node *root = inputTree();
    printLeftNodes(root->left);
    cout << root->val << " ";
    printRightNodes(root->right);
    return 0;
}