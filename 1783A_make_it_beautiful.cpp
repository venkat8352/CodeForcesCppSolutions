// 1783A Make it Beautiful
// https://codeforces.com/problemset/problem/1783/A
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
    sort(a.begin(), a.end());
    if(a[0] == a[a.size()-1]) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
      cout << a[a.size()-1] << " ";
      for(int i=0; i < n-1; i++) {
        cout << a[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
