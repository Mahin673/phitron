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

Student *fun()
{
    Student *karim = new Student(102, 11, 3.44);
    return karim;
}
int main()
{
    Student *p = fun();
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}