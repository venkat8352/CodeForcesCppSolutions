// 1761A Two Permutations
// https://codeforces.com/problemset/problem/1761/A
// 21/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {    
  int t;
  cin >> t;
  while(t--) {
    int n, a, b;
    cin >> n >> a >> b;
    if((n==a) && (n==b)) {
      cout << "Yes" << endl;
    }
    else if((n-(a+b)) >= 2) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  return 0;
}
