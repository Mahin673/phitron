#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(student l, student r)
{
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks; // using ternary operator  13-20 line er sortcut
    /* if (l.marks == r.marks)
     {
         return l.roll < r.roll;
     }
     else
     {
         return l.marks > r.marks;
     }*/
    /* if (l.marks > r.marks) //line 20-37 er shot cut line 12-19
     {
         return true;
     }
     else if (l.marks < r.marks)
     {
         return false;
     }
     else
     {
         if (l.roll < r.roll)
         {
             return true;
         }
         else
         {
             return false;
         }
     }*/
}
int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << " " << endl;
    }

    return 0;
}