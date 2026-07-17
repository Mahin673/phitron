#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;

    student(string name)
    {
        this->name = name;
        this->roll;
    }
    void hello()
    {
        cout << "Mahin Ahmed" << name << endl;
    }
};

int main()
{
    student mahin("Mahin Ahmed");
    mahin.hello();

    return 0;
}