#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int val;
    Node *next;
    Node(long long int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, long long val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    long long n;

    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }

    long long minn = LONG_MAX;
    long long maxx = LONG_MIN;

    Node *temp = head;

    while (temp != NULL)
    {
        minn = min(minn, temp->val);
        maxx = max(maxx, temp->val);

        temp = temp->next;
    }

    cout << maxx - minn << endl;

    return 0;
}
