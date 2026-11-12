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

int main()
{
    int x;
    int val;

    cin >> val;

    Node *root = new Node(val);
    root->val = val;
    root->left = NULL;
    root->right = NULL;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            cur->left = new Node(l);
            cur->left->val = l;
            cur->left->left = NULL;
            cur->left->right = NULL;

            q.push(cur->left);
        }

        if (r != -1)
        {
            cur->right = new Node(r);
            cur->right->val = r;
            cur->right->left = NULL;
            cur->right->right = NULL;

            q.push(cur->right);
        }
    }

    cin >> x;

    queue<Node *> q2;
    q2.push(root);

    int level = 0;
    bool found = false;

    while (!q2.empty())
    {
        int sz = q2.size();

        if (level == x)
        {
            found = true;

            while (sz--)
            {
                Node *cur = q2.front();
                q2.pop();

                cout << cur->val << " ";
            }

            break;
        }

        while (sz--)
        {
            Node *cur = q2.front();
            q2.pop();

            if (cur->left != NULL)
                q2.push(cur->left);

            if (cur->right != NULL)
                q2.push(cur->right);
        }

        level++;
    }

    if (found == false)
        cout << "Invalid";

    return 0;
}