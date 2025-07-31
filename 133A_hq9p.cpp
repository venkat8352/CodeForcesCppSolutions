// 133A HQ9+
// https://codeforces.com/problemset/problem/133/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool ans = false;
  for(auto c : s){
    if((c == 'H')||(c == 'Q')||(c=='9')) {
      ans = true;
      break;
    }
  }
  if(ans) 
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
