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

int max_value(Node *head)
{
    int max_value = head->val;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max_value)
        {
            max_value = temp->val;
        }
        temp = temp->next;
    }
    return max_value;
}

int min_value(Node *head)
{
    int min_value = head->val;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val < min_value)
        {
            min_value = temp->val;
        }
        temp = temp->next;
    }
    return min_value;
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

    int max_val = max_value(head);
    int min_val = min_value(head);
    int difference = max_val - min_val;
    cout << difference << endl;

    return 0;
}