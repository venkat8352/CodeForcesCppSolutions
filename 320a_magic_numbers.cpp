// 320A Magic Numbers
// https://codeforces.com/problemset/problem/320/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 30/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  string is;
  cin >> is;

  bool mgc = true;
  string cs; // current state (as in a FSM)
  for(auto c : is) {
    if(!(c == '1' || c == '4')) {
      mgc = false;
      break;
    }
    if(cs == "") {
      if(c == '1') cs = "1";
      if(c == '4') {
        mgc = false;
        break;
      }
    }
    else if(cs == "1") {
      if(c == '1') cs = "1";
      if(c == '4') cs = "14";
    }
    else if(cs == "14") {
      if(c == '1') cs = "1";
      if(c == '4') cs = ""; //reset
    }
  }

  if(mgc)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
