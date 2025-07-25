// 248A Cupboards
// https://codeforces.com/problemset/problem/248/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 25/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int it = n;
  int ls = 0, rs = 0;
  while(it--) {
    int l, r;
    cin >> l >> r;
    ls += l;
    rs += r;
  }

  int o = 0;
  if(ls > (n-ls)){
    o += n-ls;
  } 
  else {
    o += ls;
  }

  if(rs > (n-rs)) {
    o += n-rs;
  }
  else {
    o += rs;
  }
  cout << o << endl;
  return 0;
}
