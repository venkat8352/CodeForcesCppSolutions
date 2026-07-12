// 1859A United We Stand
// https://codeforces.com/problemset/problem/1859/A
// 12/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> b;
    vector<int> c;
    bool split = false;
    b.push_back(a[0]);
    for(int i = 1; i < n; i++) {
      if(a[i]!=a[i-1]) split = true;
      if(!split) {
        b.push_back(a[i]);
      }
      else {
        c.push_back(a[i]);
      }
    }
    //cout << "------- Answer for above --------" << endl;
    if(!split) {
      cout << "-1" << endl;
    }
    else {
      cout << b.size() << " " << c.size() << endl;
      for(auto &x: b) {
        cout << x << " ";
      }
      cout << endl;
      for(auto &x: c) {
        cout << x << " ";
      }
      cout << endl;
    }
    //cout << "---------------------------------" << endl;
  }
  return 0;
}
