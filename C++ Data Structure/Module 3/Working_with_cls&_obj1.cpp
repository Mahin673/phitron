#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    Student a;
    a.roll = 100;
    a.gpa = 4.50;
    char temp[100] = "Mahin";
    strcpy(a.name, temp);
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}