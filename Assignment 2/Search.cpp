#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

int find_index(Node *head, int x)
{
    Node *temp = head;
    int idx = 0;
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            return idx;
        }
        idx++;
        temp = temp->next;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        cout << find_index(head, x) << endl;
    }
    return 0;
}