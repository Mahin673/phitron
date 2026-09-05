#include <bits/stdc++.h>
using namespace std;
int main()
{
  // type 1
  //  vector<int> v;

  // type 2
  // vector<int> v(5);

  // type 3

  /*vector<int> v(5, 1);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v.size() << " ";
  */

  // type 4

  /* vector<int> v(5, 1);
   vector<int> v2(v);
   for (int i = 0; i < v.size(); i++)
   {
     cout << v2[i] << " ";
   }*/

  // type 5
  /*
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v(a, a + 5);
    for (int i = 0; i < v.size(); i++)
    {
      cout << v[i] << " ";
    }
  */
  // type 6
  vector<int> v = {1, 2, 3, 4};
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}