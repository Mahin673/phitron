#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// 4 8 5 2 1 6 9 10 7 3
// 4 2 8 5 1 6 3 9 7 10
void postorder(Node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);    // left
    postorder(root->right);   // right
    cout << root->val << " "; // root
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    postorder(root);
    return 0;
}