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

void check_duplicate(Node *head)
{
    // use frequency map to count occurrences of each value
    int freq[101] = {0};
    Node *temp = head;
    while (temp != NULL)
    {
        freq[temp->val]++;
        temp = temp->next;
    }
    bool has_duplicate = false;
    for (int i = 0; i < 101; i++)
    {
        if (freq[i] > 1)
        {
            has_duplicate = true;
        }
    }
    cout << (has_duplicate ? "YES" : "NO") << endl;
}

int main()
{
    // 2 4 5 6 7 4
    Node *head = new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(5);
    Node *c = new Node(6);
    Node *d = new Node(7);
    Node *e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    check_duplicate(head);

    return 0;
}