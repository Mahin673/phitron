#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(student l, student r)
{
    int total1 = l.math_marks + l.eng_marks;
    int total2 = r.math_marks + r.eng_marks;

    if (total1 == total2)
    {
        return l.id < r.id;
    }
    else
    {
        return total1 > total2;
    }
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << " " << endl;
    }

    return 0;
}