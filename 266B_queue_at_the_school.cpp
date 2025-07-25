// 266B Queue at the School
// https://codeforces.com/problemset/problem/266/B
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <iostream>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  while(t--) {
    for(int i = 1; i < n; i++) {
      if((s[i-1] == 'B') && (s[i] == 'G')) { 
        s[i] = 'B';
        s[i-1] = 'G';
        i++;
      }
    }
  }
  cout << s;
  return 0;
}
