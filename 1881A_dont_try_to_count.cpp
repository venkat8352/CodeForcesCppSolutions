//  Don't Try to Count
//  https://codeforces.com/problemset/problem/1881/A
//  https://www.tle-eliminators.com/cp-sheet
//  02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n;
    cin >> m;
    string x, s;
    cin >> x;
    cin >> s;
    int op = 0;
    //worstcase number of iterations (n is 1, m is 25) is 6  (1->2->4->8->16->32->64)
    bool f = false;
    for(int i = 0; i < 6; i++) {
      //search for substring
      for(int j = 0; j+m-1 < x.length(); j++) {
        if(x.substr(j, m) == s) { f = true; break; }
      }
      if(f) break;
      x += x; op++;
    }
    if(f)
      cout << op << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
