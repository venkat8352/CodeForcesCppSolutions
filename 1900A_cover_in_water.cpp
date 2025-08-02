// 1900A Cover in Water
// https://codeforces.com/problemset/problem/1900/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 3
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int td = 0; //total number of dots
    int  d = 0; //      number of consecutive dot's
    int md = 0; //max   number of consecutive dot's
    for(int i = 0; i < n; i++) {
      if(s[i] == '.') { d++; td++;}
      else {d = 0;}
      md = max(md, d);
    }
    if(md >= 3) cout << 2 << endl;
    else cout << td << endl;
  }

  return 0;
}
