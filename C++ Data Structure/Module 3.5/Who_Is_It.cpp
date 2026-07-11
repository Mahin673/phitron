#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[1000];
    char section;
    int marks;
};

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        Student rahim;

        cin >>
            rahim.id >> rahim.name >> rahim.section >> rahim.marks;

        Student karim;

        cin >>
            karim.id >> karim.name >> karim.section >> karim.marks;

        Student jabbar;

        cin >>
            jabbar.id >> jabbar.name >> jabbar.section >> jabbar.marks;

        Student ans = rahim;

        if (karim.marks > ans.marks || (karim.marks == ans.marks && karim.id < ans.id))
        {
            ans = karim;
        }
        if (jabbar.marks > ans.marks || (jabbar.marks == ans.marks && jabbar.id < ans.id))
        {
            ans = jabbar;
        }
        cout << ans.id << " " << ans.name << " " << ans.section << " " << ans.marks << endl;
    }
    return 0;
}