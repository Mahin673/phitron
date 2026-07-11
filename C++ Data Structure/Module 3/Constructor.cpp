#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    /*Student rahim;
    rahim.roll = 101;
    rahim.cls = 10;
    rahim.gpa = 3.33;

    Student karim;
    karim.roll = 102;
    karim.cls = 11;
    karim.gpa = 3.44;*/

    Student rahim(101, 10, 3.33);
    Student karim(102, 11, 3.44);

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}