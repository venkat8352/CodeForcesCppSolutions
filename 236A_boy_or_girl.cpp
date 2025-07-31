// 236A Boy or Girl
// https://codeforces.com/problemset/problem/236/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  bool ba[26];
  for(int i = 0; i < 26; i++) ba[i] = false;

  string s;
  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    ba[s[i]-'a'] = true;
  }

  int c = 0;
  for(int i = 0; i < 26; i++) {
    if(ba[i]) c++;
  }

  if(c % 2 == 1) 
    cout << "IGNORE HIM!" << endl;
  else
    cout << "CHAT WITH HER!" << endl;
  return 0;
}
