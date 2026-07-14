// 1853A Desorting
// https://codeforces.com/problemset/problem/1853/A
// 13/07/2026

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
    bool sorted = true;
    int diff = (1<<30)-1;
    for(int i = 1; i < n; i++) {
      if(a[i-1] > a[i]) {
        sorted = false;
      }
      else {
        if((a[i] - a[i-1]) < diff) diff = a[i]-a[i-1];
      }
    }
    //cout << "--- Answer ---" << endl;
    if(!sorted) {
      cout << 0 << endl;
    }
    else {
      if(diff == 0) cout << 1 << endl;
      else cout << (diff/2)+1 << endl;
    }
  }
  return 0;
}
