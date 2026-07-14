// 1829B Blank Space
// https://codeforces.com/problemset/problem/1829/B
// 14/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int cc = 0;
    int mc = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x==0) cc++;
      else {
        if(cc > mc) mc = cc;
        cc = 0;
      }
    }
    if(cc > mc) mc = cc;
    //cout << ">>> Start" << endl;
    cout << mc << endl;
    //cout << ">>> End" << endl;
  }
  return 0;
}
