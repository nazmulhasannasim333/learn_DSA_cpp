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

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_position(Node *&head, Node *&tail, int idx, int value)
{
    Node *new_node = new Node(value);
    if (idx < 0)
    {
        cout << "Invalid" << endl;
        return;
    }
    if (idx == 0)
    {
        new_node->next = head;
        head = new_node;
        if (tail == NULL)
        {
            tail = new_node;
        }
        print_list(head);
        cout << endl;
        return;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    if (idx > cnt)
    {
        cout << "Invalid" << endl;
        return;
    }

    temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    if (new_node->next == NULL)
    {
        tail = new_node;
    }
    print_list(head);
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    int t;
    cin >> t;
    while (t--)
    {
        int idx, value;
        cin >> idx >> value;
        insert_at_position(head, tail, idx, value);
    }

    return 0;
}