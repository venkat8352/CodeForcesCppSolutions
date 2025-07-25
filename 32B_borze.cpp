// 32B Borze
// https://codeforces.com/problemset/problem/32/B
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string is;
  cin >> is;
  string os;
  string s;
  for(char c : is) {
    s += c;
    if(s == ".")  { os += '0'; s.erase(); }
    if(s == "-.") { os += '1'; s.erase(); }
    if(s == "--") { os += '2'; s.erase(); }
  }
  cout << os << endl;
  return 0;
}
