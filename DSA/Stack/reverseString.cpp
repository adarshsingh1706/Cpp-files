#include <iostream>
using namespace std;
#include <stack>

int main()
{
  string s = "Rivieira";
  stack<char> st;

  for (int i = 0; i < s.length(); i++)
  {
    char ch = s[i];
    st.push(ch);
  }

  string ans = "";

  while (!st.empty())
  {
    char as = st.top();
    ans.push_back(as);
    st.pop();
  }

  cout << "Reversed String is" << ans << endl;
}

// TS => O(N);
// sC =O(N);