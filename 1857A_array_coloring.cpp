// 1857A Array Coloring
// https://codeforces.com/problemset/problem/1857/A
// 12/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    //separate the list into two lists: {odd_numbers},  {even_numbers}
    //sum of even_numbers list is always even
    //sum of odd_numbers  list can be even (output: YES) or odd (output: NO)
    int cOdd = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x&1) cOdd++;
    }
    cout << ((cOdd & 1) ? "NO" : "YES") << endl;
  }
  return 0;
}
