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
    cin >> x;

    Node *root = new Node(x);

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        int l, r;
        if (!(cin >> l >> r))
            break;

        if (l != -1)
        {
            cur->left = new Node(l);
            q.push(cur->left);
        }

        if (r != -1)
        {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }

    vector<int> left, right;

    Node *cur = root->left;

    while (cur != NULL)
    {
        left.push_back(cur->val);

        if (cur->left != NULL)
            cur = cur->left;
        else
            cur = cur->right;
    }

    cur = root->right;

    while (cur != NULL)
    {
        right.push_back(cur->val);

        if (cur->right != NULL)
            cur = cur->right;
        else
            cur = cur->left;
    }

    for (int i = left.size() - 1; i >= 0; i--)
        cout << left[i] << " ";

    cout << root->val << " ";

    for (int i = 0; i < right.size(); i++)
        cout << right[i] << " ";

    return 0;
}