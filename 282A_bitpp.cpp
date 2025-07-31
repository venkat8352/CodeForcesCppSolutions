// 282A Bit++
// https://codeforces.com/problemset/problem/282/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;
  while(n-- > 0) {
    string s;
    cin >> s;
    if(s[1] == '+') x++;
    if(s[1] == '-') x--;
  }  
  cout << x << endl;
  return 0;
}
