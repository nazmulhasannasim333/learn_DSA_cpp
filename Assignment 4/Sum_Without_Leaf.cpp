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

int levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);

    int sum = 0;
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (!f->left && !f->right)
        {
            continue;
        }
        sum += f->val;

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
    return sum;
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
    int res = levelOrderTraversal(root);
    cout << res << endl;
    return 0;
}