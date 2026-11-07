#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

bool cmp(student a, student b)
{
    if (a.eng != b.eng)
        return a.eng > b.eng;
    else if (a.math != b.math)
        return a.math > b.math;
    else
        return a.id < b.id;
}
int main()
{
    int n;
    cin >> n;
    student s[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].sec >> s[i].id >> s[i].math >> s[i].eng;
    }

    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)

    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].sec << " " << s[i].id << " " << s[i].math << " " << s[i].eng << " " << endl;
    }
    return 0;
}