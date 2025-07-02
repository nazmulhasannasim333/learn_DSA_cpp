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

void delete_at_tail(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;
    if (pos == 0)
    {
        head = head->next;
        delete temp;
        return;
    }
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    Node *deleted_node = temp->next;
    temp->next = deleted_node->next;
    delete deleted_node;
    tail = temp;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
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

    delete_at_tail(head, tail, 3);

    print_list(head);

    return 0;
}