// 59A Word
// https://codeforces.com/problemset/problem/59/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  cin >> s;
  int u = 0;
  int l = 0;
  for(char x : s) {
    if(isupper(x)) u++;
    if(islower(x)) l++;
  }
  string os;
  for(char x : s) {
    if(isalpha(x))
      if(u > l)
        os += toupper(x);
      else 
        os += tolower(x);
    else
      os += x;
  }
  cout << os;
  return 0;
}
