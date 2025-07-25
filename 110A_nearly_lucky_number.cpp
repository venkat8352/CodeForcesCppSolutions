// 110A Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n;
  cin >> n;
  int c = 0;
  while(n) {
    if((n%10 == 4) || (n%10 == 7)) c++;
    n /= 10;
  }
  if(c == 4 || c == 7) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
