// 61A Ultra-Fast Mathematician
// https://codeforces.com/problemset/problem/61/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);  
  string m;
  string n;
  cin >> m;
  cin >> n;
  string o;
  for(int i = 0; i < m.length(); i++) {
    if(m[i] == n[i]) o += '0';
    else o += '1';
  }
  cout << o << endl;
  return 0;
}
