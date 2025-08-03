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

void printNodesAtLevel(Node *root, int x)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<int> ans;
    while (!q.empty())
    {
        Node *f = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == x)
        {
            ans.push_back(f->val);
        }
        if (level < x)
        {
            if (f->left)
                q.push({f->left, level + 1});
            if (f->right)
                q.push({f->right, level + 1});
        }
    }

    if (!ans.empty())
    {
        for (int val : ans)
            cout << val << " ";
    }
    else
    {
        cout << "Invalid" << endl;
    }
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
    int x;
    cin >> x;
    printNodesAtLevel(root, x);
    return 0;
}