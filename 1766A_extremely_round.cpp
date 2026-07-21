// 1766A Extemely Round
// https://codeforces.com/problemset/problem/1766/A
// 21/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {    
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a = 0;
    for(int x = 1; (x<=n) && (x < 10); x+=1) {
      a++;
    }
    for(int x = 10; (x<=n) && (x < 100); x+=10) {
      a++;
    }
    for(int x = 100; (x<=n) && (x < 1000); x+=100) {
      a++;
    }
    for(int x = 1000; (x<=n) && (x < 10000); x+=1000) {
      a++;
    }
    for(int x = 10000; (x<=n) && (x < 100000); x+=10000) {
      a++;
    }
    for(int x = 100000; (x<=n) && (x < 1000000); x+=100000) {
      a++;
    }
    cout << a << endl;
  }
  return 0;
}
