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
    int n;
    cin >> n;

    while (n--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        long long x;

        while (cin >> x)
        {
            if (x == -1)
            {
                break;
            }
            insert_at_tail(head, tail, x);
        }

        long long X;
        cin >> X;

        Node *temp = head;
        int index = 0;
        int ans = -1;

        while (temp != NULL)
        {
            if (temp->val == X)
            {
                ans = index;
                break;
            }

            temp = temp->next;
            index++;
        }

        cout << ans << endl;
    }

    return 0;
}