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

void insert_at_head(Node *&head, int val) //& diye reference kora hoyese
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print_linkedlist(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head, 5);
    insert_at_head(head, 3);
    insert_at_head(head, 1);
    print_linkedlist(head);
    return 0;
}