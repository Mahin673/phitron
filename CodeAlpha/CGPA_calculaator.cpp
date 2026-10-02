#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    double totalCredit = 0;
    double totalGradePoint = 0;

    for (int i = 1; i <= n; i++)
    {

        double grade, credit;
        cin >> grade >> credit;

        totalCredit += credit;
        totalGradePoint += grade * credit;

        cout << "Course " << i << " Grade: " << grade << endl;
    }

    double cgpa = totalGradePoint / totalCredit;

    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}