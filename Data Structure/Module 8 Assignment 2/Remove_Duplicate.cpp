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

void remove_at_duplicate(Node *head)
{
    Node *a = head;

    while (a != NULL)
    {
        Node *b = a;

        while (b->next != NULL)
        {
            if (a->val == b->next->val)
            {
                b->next = b->next->next;
            }
            else
            {
                b = b->next;
            }
        }

        a = a->next;
    }
}

void print_at_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int x;

    while (cin >> x)
    {
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }

    remove_at_duplicate(head);

    print_at_list(head);

    return 0;
}