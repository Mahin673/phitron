#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    switch (day)
    {

    case 1: // if(day ==1)
        cout << "Saturday\n";
        break;
    case 2: // else if (day ==2)
        cout << "Sunday\n";
        break;
    case 3: // else if (day ==3)
        cout << "Monday\n";
        break;
    case 4: // else if (day ==4)
        cout << "Tuesday\n";
        break;
    case 5: // else if (day ==5)
        cout << "Wednesday\n";
        break;
    case 6: // else if (day ==6)
        cout << "Thursday\n";
        break;
    case 7: // else if (day ==7)
        cout << "Friday\n";
        break;
    default: // else
        cout << "Invalid day\n";
    }

    return 0;
}