// 1805A We Need the Zero
// https://codeforces.com/problemset/problem/1805/A
// 18/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;  
    cin >> n;
    vector<int unsigned> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int unsigned aX;
    aX = a[0];
    for(int i = 1; i < n; i++) {
      aX = aX ^ a[i];
    }
    if(n&1) 
      cout << aX << endl;
    else
      if(aX)
        cout << -1 << endl;
      else
        cout << 0 << endl;
  }
  return 0;
}
