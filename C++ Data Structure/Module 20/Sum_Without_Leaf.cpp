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
    vector<int> a;
    int x;

    while (cin >> x)
    {
        a.push_back(x);
    }

    if (a.empty() || a[0] == -1)
    {
        cout << 0;
        return 0;
    }

    Node *root = new Node(a[0]);

    queue<Node *> q;
    q.push(root);

    int i = 1;
    int sum = 0;

    while (!q.empty() && i < a.size())
    {

        Node *temp = q.front();
        q.pop();

        if (i < a.size() && a[i] != -1)
        {
            temp->left = new Node(a[i]);
            q.push(temp->left);
        }
        i++;

        if (i < a.size() && a[i] != -1)
        {
            temp->right = new Node(a[i]);
            q.push(temp->right);
        }
        i++;

        if (temp->left != NULL || temp->right != NULL)
        {
            sum += temp->val;
        }
    }

    cout << sum;

    return 0;
}