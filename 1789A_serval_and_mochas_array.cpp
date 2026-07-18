// 1789A Serval and Mocha's Array
// https://codeforces.com/problemset/problem/1789/A
// 18/07/2026

#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if(x%y==0) return y;
  else return gcd(y, x%y);
}

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
    int b = false;
    for(int i = 0; i < n-1; i++) {
      for(int j = i+1; j < n; j++) {
        if(gcd(a[i], a[j]) <= 2) b = true;
      }
    }

    if(b) 
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
