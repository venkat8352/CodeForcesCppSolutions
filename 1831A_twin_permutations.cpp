// 1831A Twin Permutations
// https://codeforces.com/problemset/problem/1831/A
// 14/07/2026

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
    //cout << ">>> Start" << endl;
    for(auto &v : a)
      cout << n+1-v << " ";
    cout << endl;
    //cout << ">>> End" << endl;
  }
  return 0;
}
