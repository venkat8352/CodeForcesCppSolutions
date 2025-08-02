//  How Much Does Daytona Cost?
//  https://codeforces.com/problemset/problem/1878/A
//  https://www.tle-eliminators.com/cp-sheet
//  02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    bool f = false;
    for(int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if(a==k) f = true;
    }
    if(f)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
