// 271A Beautiful Year
// https://codeforces.com/problemset/problem/271/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int y;
  cin >> y;
  for(int n = y+1; n <= 10000; n++) {
    int continue_ = 0;
    string s = to_string(n);
    for(int i = 0; i < s.length()-1; i++) {
      for(int j = i+1; j < s.length(); j++) {
        //cout << "comparing " << n << " " << i << " " << j << " " << s << endl;
        if(s[i] == s[j]) continue_ = 1;
        if(continue_) break;
      }
      if(continue_) break;
    }
    if(continue_) continue;
    else {
      cout << n << endl;
      break;
    }
  }
  return 0;
}
