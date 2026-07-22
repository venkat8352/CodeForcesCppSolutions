// 1904A Forked
// https://codeforces.com/problemset/problem/1904/A
// 22/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {    
  int t;
  cin >> t;
  while(t--) {
    int a, b;
    cin >> a >> b;
    int xK, yK;
    cin >> xK >> yK;
    vector<pair<int, int>> Kv;
    Kv.push_back({xK+a, yK+b});
    Kv.push_back({xK+a, yK-b});
    Kv.push_back({xK-a, yK+b});
    Kv.push_back({xK-a, yK-b});
    Kv.push_back({xK+b, yK+a});
    Kv.push_back({xK+b, yK-a});
    Kv.push_back({xK-b, yK+a});
    Kv.push_back({xK-b, yK-a});
    int xQ, yQ;
    cin >> xQ >> yQ;
    vector<pair<int, int>> Qv;
    Qv.push_back({xQ+a, yQ+b});
    Qv.push_back({xQ+a, yQ-b});
    Qv.push_back({xQ-a, yQ+b});
    Qv.push_back({xQ-a, yQ-b});
    Qv.push_back({xQ+b, yQ+a});
    Qv.push_back({xQ+b, yQ-a});
    Qv.push_back({xQ-b, yQ+a});
    Qv.push_back({xQ-b, yQ-a});
    //for(auto&v: Kv) {
    //  cout << "(" << v.first << ", " << v.second << ")" << endl;
    //}
    //for(auto&v: Qv) {
    //  cout << "(" << v.first << ", " << v.second << ")" << endl;
    //}
    int ans = 0;
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
        if(Kv[i] == Qv[j]) {
          ans++; break;
        }
      }
    }
    if(a==b) ans/=2;
    //cout << "---------" << endl;
    cout << ans << endl;
    //cout << "---------" << endl;

  }
  return 0;
}
