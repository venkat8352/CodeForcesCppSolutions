// 71A Way Too Long Words
// https://codeforces.com/problemset/problem/71/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    if(s.length() > 10) {
      cout << s[0] << s.length()-1-1 << s[s.length()-1] << endl;
    }
    else {
      cout << s << endl;
    }
  }
  return 0;
}
