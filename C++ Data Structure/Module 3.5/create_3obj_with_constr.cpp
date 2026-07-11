#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(char n[], int r, char s, double m, int c)
    {
        roll = r;
        cls = c;
        math_marks = m;
        section = s;
        strcpy(name, n);
    }
};

int main()
{
    Student rahim("Rahim", 101, 'A', 80.33, 8);
    Student karim("Karim", 102, 'B', 79.44, 8);
    Student Jabbar("Jabbar", 103, 'C', 81.55, 8);
    cout << rahim.name << " " << rahim.roll << " " << rahim.section << " " << rahim.cls << " " << rahim.math_marks << endl;
    cout << karim.name << " " << karim.roll << " " << karim.section << " " << karim.cls << " " << karim.math_marks << endl;
    cout << Jabbar.name << " " << Jabbar.roll << " " << Jabbar.section << " " << Jabbar.cls << " " << Jabbar.math_marks << endl;

    return 0;
}