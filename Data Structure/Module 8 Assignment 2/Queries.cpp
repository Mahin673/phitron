#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long val;
    Node *next;

    Node(long long val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, long long val)
{
    Node *newnode = new Node(val);

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, long long val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

void delete_at_index(Node *&head, long long index)
{
    if (head == NULL)
        return;

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
            return;

        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node *del = temp->next;
    temp->next = del->next;

    delete del;
}

void print_at_list(Node *head)
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
    Node *head = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int X;
        long long V;

        cin >> X >> V;

        if (X == 0)
            insert_at_head(head, V);

        else if (X == 1)
            insert_at_tail(head, V);

        else
            delete_at_index(head, V);

        print_at_list(head);
    }

    return 0;
}