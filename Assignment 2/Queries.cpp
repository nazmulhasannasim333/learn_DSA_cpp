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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
    if (tail == NULL)
        tail = new_node;
}

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

void delete_any_pos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
    {
        return;
    }
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    if (pos < 0 || pos >= len)
    {
        return;
    }

    if (pos == 0)
    {
        Node *to_delete = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete to_delete;
        return;
    }
    temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    Node *deleted_node = temp->next;
    temp->next = deleted_node->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
    delete deleted_node;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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
        int idx, val;
        cin >> idx >> val;
        if (idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (idx == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (idx == 2)
        {
            delete_any_pos(head, tail, val);
        }
        print_list(head);
    }

    return 0;
}