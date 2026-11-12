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
    vector<int> a, v;
    int x;

    while (cin >> x)
    {
        a.push_back(x);
    }

    if (a.empty() || a[0] == -1)
        return 0;

    Node *root = new Node(a[0]);

    queue<Node *> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < a.size())
    {

        Node *p = q.front();
        q.pop();

        if (i < a.size() && a[i] != -1)
        {
            p->left = new Node(a[i]);
            q.push(p->left);
        }
        i++;

        if (i < a.size() && a[i] != -1)
        {
            p->right = new Node(a[i]);
            q.push(p->right);
        }
        i++;
        if (p->left == NULL && p->right == NULL)
        {
            v.push_back(p->val);
        }
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}