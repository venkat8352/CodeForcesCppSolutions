// 1903A Halloumi Boxes
// https://codeforces.com/problemset/problem/1903/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 1
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k;
    cin >> n >> k;
    bool o = true; //already in non-decreasing order
    int c, p; //current, previous
    for(int i = 0; i < n; i++){
      cin >> c;
      if(i==0) p = c;
      if(c < p) o = false;
      p = c;
    }
    if(k >= 2) {
      //bubble sort .. just needs to swap two elements
      cout << "YES" << endl;
    }
    else if((k==1) && o) {
      //even if k is 1 .. since it's already in order, print YES
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
