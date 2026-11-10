#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *prev;
    Node *next;

    Node(int v)
    {
        val = v;
        prev = NULL;
        next = NULL;
    }
};

int main()
{
    int q, x, v;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    while (q--)
    {
        cin >> x >> v;

        if (x < 0 || x > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }

        Node *n = new Node(v);

        if (head == NULL)
        {
            head = tail = n;
        }
        else if (x == 0)
        {
            n->next = head;
            head->prev = n;
            head = n;
        }
        else
        {
            Node *temp = head;

            for (int i = 0; i < x - 1; i++)
                temp = temp->next;

            n->next = temp->next;
            n->prev = temp;

            if (temp->next != NULL)
                temp->next->prev = n;
            else
                tail = n;

            temp->next = n;
        }

        sz++;

        cout << "L -> ";
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;

        cout << "R -> ";
        temp = tail;

        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->prev;
        }

        cout << endl;
    }
    return 0;
}