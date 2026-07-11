#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int row, int cls, double gpa)
    {
        this->roll = row;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(102, 11, 3.44);

    Student karim(101, 10, 3.33);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}