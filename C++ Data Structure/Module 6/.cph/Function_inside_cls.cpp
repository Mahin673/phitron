#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int math;
    int english;
    student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll;
        this->math = math;
        this->english = english;
    }
    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    student mahin("Mahin Ahmed", 1, 96, 99);
    mahin.total();

    return 0;
}