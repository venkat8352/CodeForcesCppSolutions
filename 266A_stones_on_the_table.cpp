// 266A Stones on the Table
// https://codeforces.com/problemset/problem/266/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  string is;
  cin >> is;
  int c = 0;
  for(int i = 1; i < is.length(); i++){
    if(is[i-1] == is[i]) c++;
  }
  cout << c << endl;
  return 0;
}
