#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    string s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    }
    int x = 0, y = n - 1;
    while (x < y)
    {
        swap(a[x].s, a[y].s);
        x++;
        y--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}