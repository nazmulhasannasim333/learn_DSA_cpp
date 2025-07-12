#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        bool result = insert_at_pos(head, tail, pos, val);
        if (!result)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            print_forward(head);
            print_backward(tail);
        }
    }

    return 0;
}