// 1862B Sequence Game
// https://codeforces.com/problemset/problem/1862/B
// 12/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector <int> b;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      b.push_back(x);
    } 
    vector <int> a;
    a.push_back(b[0]);
    for(int i = 1; i < n; i++) {
      if(b[i-1] <= b[i]) {
        a.push_back(b[i]);
      }
      else {
        a.push_back(1);
        a.push_back(b[i]);
      }
    }
    cout << a.size() << endl;
    for(auto &x: a) {
      cout << x << " ";
    }
    cout << endl;
  }
  return 0;
}
