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
    if (root == NULL)
    {
        cout << "Tree is empty." << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

Node *ConvertArrayToBST(int a[], int l, int r)
{
    if (l > r)
        return NULL;

    int mid = l + (r - l) / 2;
    Node *root = new Node(a[mid]);

    root->left = ConvertArrayToBST(a, l, mid - 1);
    root->right = ConvertArrayToBST(a, mid + 1, r);

    return root;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Node *root = ConvertArrayToBST(a, 0, n - 1);
    levelOrderTraversal(root);
    return 0;
}