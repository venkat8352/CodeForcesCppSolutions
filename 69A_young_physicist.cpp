// 69A Young Physicist
// https://codeforces.com/problemset/problem/69/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  int X=0, Y=0, Z=0;
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--) {
    int x, y, z;
    cin >> x >> y >> z;
    X += x;
    Y += y;
    Z += z;
  }
  if((X==0) && (Y==0) && (Z==0)) cout << "YES";
  else cout << "NO";
  return 0;
}
