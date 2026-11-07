#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    // top & pop er kaj loop er baire korle ay step
    /*
    if(!st.empty())
      {
          st.top();
      }
      if(!st.empty())
      {
          st.pop();
      }
  */

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}