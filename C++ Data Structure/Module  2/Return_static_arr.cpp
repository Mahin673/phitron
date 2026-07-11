#include <bits/stdc++.h>
using namespace std;
int fun()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    return a;
}
int main()
{
    int *p = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
}
/*static arr amra kono function
 a declare kori then return
  kori tahole oi value r print kora jay
  na karon delete hoye jay*/