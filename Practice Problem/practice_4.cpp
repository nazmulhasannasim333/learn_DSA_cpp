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

bool insert_at_pos(Node *&head, Node *&tail, int pos, int val)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (pos < 0 || pos > count)
    {
        return false;
    }
    Node *new_node = new Node(val);
    if (pos == 0)
    {
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }
    else if (pos == count)
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    else
    {
        Node *curr = head;
        for (int i = 1; i < pos; i++)
        {
            curr = curr->next;
        }
        new_node->next = curr->next;
        new_node->prev = curr;
        curr->next->prev = new_node;
        curr->next = new_node;
    }
}

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