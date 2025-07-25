// 80A Panoramix's Prediction
// https://codeforces.com/problemset/problem/80/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
  int x = sqrt(n);
  for(int i = 2; i <= x; i++) {
    if(n % i == 0) return false;
  }
  return true;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  int p;
  cin >> n >> m;
  for(int i = n+1; i <= m; i++) {
    if(isPrime(i)) {
      p = i;
      break;
    }
  }
  if(p == m) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
