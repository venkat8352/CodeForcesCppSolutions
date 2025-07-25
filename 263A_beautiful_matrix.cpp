// 263A Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int I= 0, J = 0;
  for(int i = 1; i <= 5; i++) {
    for(int j = 1; j <= 5; j++) {
      int a;
      cin >> a;
      if(a) {I = i; J = j;}
    }
  }
  cout << abs(I-3) + abs(J-3) << endl;
  return 0;
}
