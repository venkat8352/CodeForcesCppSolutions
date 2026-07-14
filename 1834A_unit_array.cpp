// 1834A Unit Array
// https://codeforces.com/problemset/problem/1834/A
// 14/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int cM = 0;
    int cP = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x == -1) cM++;
      if(x ==  1) cP++;
    }
    int ans = 0; 
    if(cM%2 == 1) {
      ans++;
      cM--;
      cP++;
    }
    while((cP - cM) < 0) {
      cM -= 2;
      cP += 2;
      ans += 2;
    }
    //cout << ">>> Start" << endl;
    cout << ans << endl;
    //cout << ">>> End" << endl;
  }
  return 0;
}
