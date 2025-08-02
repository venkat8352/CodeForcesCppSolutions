// 1806A Walking Master
// https://codeforces.com/problemset/problem/1806/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 23
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    //(a,b) -> N x [(++, ++) or (--, )] -> (c, d)
    int m = 0;
    int x = a;
    int y = b;
    //try incrementing y to reach d
    //try decrementing x to reach c
    while(y < d) { x++; y++; m++; }
    while(x > c) { x--;      m++; }
    if((x == c) && (y == d))
      cout << m << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
