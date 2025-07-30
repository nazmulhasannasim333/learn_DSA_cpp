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
        // 1. get the front node and pop it
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        // 2. create the left and right child nodes
        Node *leftChild, *rightChild;
        if (l == -1)
            leftChild = NULL;
        else
            leftChild = new Node(l);

        if (r == -1)
            rightChild = NULL;
        else
            rightChild = new Node(r);

        // 3. assign the left and right child nodes to the current node
        p->left = leftChild;
        p->right = rightChild;

        // 4. push the left and right child nodes into the queue
        if (p->left)
            q.push(leftChild);
        if (p->right)
            q.push(rightChild);
    }
    return root;
}

int getMaxHeight(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int leftHeight = getMaxHeight(root->left);
    int rightHeight = getMaxHeight(root->right);
    return max(leftHeight, rightHeight) + 1;
}

int main()
{
    Node *root = inputTree();
    cout << "Maximum height of the tree: " << getMaxHeight(root) << endl;

    return 0;
}