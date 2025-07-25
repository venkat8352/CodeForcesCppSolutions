// 148A Insomnia cure
// https://codeforces.com/problemset/problem/148/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 25/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int o = 0;
  for(int i = 1; i <= d; i++) {
    if(i%k == 0) { o++; continue; }
    if(i%l == 0) { o++; continue; }
    if(i%m == 0) { o++; continue; }
    if(i%n == 0) { o++; continue; }
  }
  cout << o << endl;
  return 0;
}
