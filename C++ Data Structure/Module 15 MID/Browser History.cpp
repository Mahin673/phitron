#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;
    string s;

    while (cin >> s && s != "end")
        l.push_back(s);

    int q;
    cin >> q;

    auto cur = l.begin();

    while (q--)
    {
        cin >> s;

        if (s == "visit")
        {
            cin >> s;
            bool ok = false;

            for (auto it = l.begin(); it != l.end(); it++)
            {
                if (*it == s)
                {
                    cur = it;
                    ok = true;
                    break;
                }
            }

            if (ok)
                cout << *cur << endl;
            else
                cout << "Not Available" << endl;
        }

        else if (s == "next")
        {
            if (next(cur) != l.end())
            {
                cur++;
                cout << *cur << endl;
            }
            else
                cout << "Not Available" << endl;
        }

        else if (s == "prev")
        {
            if (cur != l.begin())
            {
                cur--;
                cout << *cur << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}