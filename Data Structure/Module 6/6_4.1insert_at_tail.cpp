// jodi linked list faka thake tahole ay code hobe
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

void insert_at_tail(Node *&head, int val) //& diye reference kora hoyese .chaile sob jaigay ref deya jay

{
    Node *newnode = new Node(val);
    if (head == NULL) // 19-23 no line er moddhe head null kina check kora hoyese. karon head null hole newnode ke head e assign kora hobe.
    {
        head = newnode;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // right now tmp is at last node.
    tmp->next = newnode;
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
    Node *head = NULL;
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);
    print_linkedlist(head);
    return 0;
}