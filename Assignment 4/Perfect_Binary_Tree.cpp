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

int getMaxDepth(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int leftDepth = getMaxDepth(root->left);
    int rightDepth = getMaxDepth(root->right);
    return max(leftDepth, rightDepth) + 1;
}

int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    int left_count = countNodes(root->left);
    int right_count = countNodes(root->right);
    return left_count + right_count + 1;
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
    int depth = getMaxDepth(root);
    int nodeCount = countNodes(root);
    int maxDepth = pow(2, depth) - 1;

    bool isPerfect = (nodeCount == maxDepth);
    cout << (isPerfect ? "YES" : "NO") << endl;

    return 0;
}