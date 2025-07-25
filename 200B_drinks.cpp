// 200B Drinks
// https://codeforces.com/problemset/problem/200/B
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 25/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int it = n;
  double o = 0.0;
  while(it--) {
    int p;
    cin >> p;
    o += double(p);
  }
  o /= n;
  cout << o << endl;
  return 0;
}
