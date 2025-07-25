// 141A Amusing Joke
// https://codeforces.com/problemset/problem/141/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 20/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  if(s1.length() + s2.length() != s3.length()) {
    cout << "NO" << endl;
  }
  else {
    for(char x : s1+s2) {
      for(int i = 0; i < s3.length(); i++) {
        if(s3[i] == x){
          s3[i] = '_';
          break;
        }
      }
    }
    bool Yes = true;
    for(int i = 0; i < s3.length(); i++) {
      if(s3[i] != '_') Yes = false;
    }
    if(Yes)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
