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

void print_middle_element(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    int mid = cnt / 2;
    temp = head;
    for (int i = 1; i < mid; i++)
    {
        temp = temp->next;
    }
    if (cnt % 2 == 0)
    {
        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        cout << temp->next->val << endl;
    }
}

int main()
{
    // 1 2 3 4 5 6
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_middle_element(head);

    return 0;
}