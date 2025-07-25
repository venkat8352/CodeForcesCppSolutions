// 281A Word Capitalization
// https://codeforces.com/problemset/problem/281/A
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
  for(int i = 0; i < is.length(); i++){
    if(i == 0) { os += toupper(is[i]); continue;}
    os += is[i];
  }
  cout << os << endl;
  return 0;
}
