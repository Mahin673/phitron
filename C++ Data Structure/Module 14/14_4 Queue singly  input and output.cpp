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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // o(1)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;

            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    void pop() // o(1)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front() // o(1)
    {
        return head->val;
    }

    int back() // o(1)
    {
        return tail->val;
    }
    int size() // o(1)
    {
        return sz;
    }
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // cout << q.front() << " " << q.back() << " " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}