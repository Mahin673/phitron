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

Student fun()
{
    Student karim(102, 11, 3.44);
    return karim;
}

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

    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}