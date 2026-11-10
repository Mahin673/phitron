#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<int> l;

    void push(int val) // o(1)
    {
        l.push_back(val);
    }

    void pop() // o(1)
    {
        l.pop_front();
    }

    int front() // o(1)
    {
        return l.front();
    }

    int back() // o(1)
    {
        return l.back();
    }
    int size() // o(1)
    {
        return l.size();
    }
    bool empty() // o(1)
    {
        if (l.empty())
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
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}