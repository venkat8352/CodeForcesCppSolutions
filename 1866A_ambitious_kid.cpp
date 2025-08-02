// https://codeforces.com/problemset/problem/1866/A
// 1866A Ambitious Kid
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 11
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int min_ = 1e5+1;
  while(n--) {
    int x;
    cin >> x;
    if(abs(x) < min_) min_ = abs(x);
  }
  cout << min_ << endl;
  return 0;
}
