// 1777A Everybody Likes Good Arrays
// https://codeforces.com/problemset/problem/1777/A
// 20/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {    
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &v: a) {
      cin >> v;
    }
    int cnt = 0;
    for(int i = 1; i <n; i++) {
      if((a[i-1]&1) == (a[i]&1)) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
