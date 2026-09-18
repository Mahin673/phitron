#include <bits/stdc++.h>
using namespace std;
/*int main()
{
   list<int> l(10, 3);
   for (auto it = l.begin(); it != l.end(); it++)
   {
       cout << *it << endl;
   }

   // cout << *l.begin() << endl;
   return 0;
}

int main()
{
    list<int> l(10, 5);
    for (int val : l)
    {
        cout << val << endl;
    }

    // cout << *l.begin() << endl;
    return 0;
}*/

int main()
{
    // list<int> l = {1, 2, 3, 4, 5};
    // int a[] = {10, 20, 30};

    vector<int> v = {10, 20, 30};
    list<int> l2(v.begin(), v.end());
    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}