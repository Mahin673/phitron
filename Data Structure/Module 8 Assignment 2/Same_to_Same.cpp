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
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

void compare_list(Node *head1, Node *head2)
{
    Node *a = head1;
    Node *b = head2;

    while (a != NULL && b != NULL)
    {
        if (a->val != b->val)
        {
            cout << "NO" << endl;
            return;
        }

        a = a->next;
        b = b->next;
    }

    if (a == NULL && b == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int x;

    while (cin >> x && x != -1)
    {
        insert_at_tail(head1, tail1, x);
    }

    while (cin >> x && x != -1)
    {
        insert_at_tail(head2, tail2, x);
    }

    compare_list(head1, head2);

    return 0;
}