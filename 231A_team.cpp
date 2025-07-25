// 231A Team
// https://codeforces.com/problemset/problem/231/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 20/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);  
  int n;
  cin >> n;
  int o = 0;
  while(n--) {
    int p, v, t;
    cin >> p >> v >> t;
    o += ((p+v+t)>=2) ? 1 : 0;
  }
  cout << o << endl;
  return 0;
}
