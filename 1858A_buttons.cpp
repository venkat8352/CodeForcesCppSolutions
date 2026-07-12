// 1858A Buttons
// https://codeforces.com/problemset/problem/1858/A
// 12/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a, b, c;
    cin >> a >> b >> c;
    //use the common buttons first
    //if odd,  Katies Turn
    //if even, Anna's Turn
    if(c&1) {
      if(b > a) cout << "Second" << endl;
      else      cout << "First"  << endl;
    }
    else {
      if(a > b) cout << "First" << endl;
      else      cout << "Second"  << endl;
    }
  }
  return 0;
}
