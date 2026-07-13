// 1845A Forbidden Integer
// https://codeforces.com/problemset/problem/1845/A
// 12/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a;
    if(x!=1) {
      for(int i = 1; i <= n; i++) 
        a.push_back(1);
    }
    else {
      if(k==1) {
        //not possible
      }
      else if(k==2) {
        if(n&1) {
          //not possible
        }
        else {
          for(int i = 1; i <= n/2; i++) a.push_back(2);
        }
      }
      else {

        if(n&1) {
          a.push_back(3);
          for(int i = 1; i <= (n-3)/2; i++) a.push_back(2);
        }
        else {
          for(int i = 1; i <= n/2; i++) a.push_back(2);
        }
      }
    }

    if(a.size() == 0) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
      cout << a.size() << endl;
      for(auto &v: a) {
        cout << v << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
