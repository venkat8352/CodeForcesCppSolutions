// 1901A Line Trip
// https://codeforces.com/problemset/problem/1901/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 2
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(1+n+1);
    a[0] = 0;
    int cp = 0;
    for(int i = 1; i < 1+n+1; i++) {
      if(i == 1+n+1-1) a[i] = x + x-a[i-1]; //'x' is not a fuelling station. so have to travel double the distance ('x' - last point)
      else      cin >> a[i];
      cp = max(cp, a[i]-a[i-1]);
    }
    cout << cp << endl;
  }

  return 0;
}
