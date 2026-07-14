// 1837A Grasshopper on a Line
// https://codeforces.com/problemset/problem/1837/A
// 14/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int x, k;
    cin >> x >> k;
    vector<int> a;
    if(x%k != 0) {
      a.push_back(x);
    }
    else {
      if(x==100) {
        a.push_back(x-1);
        a.push_back(1);
      }
      else {
        a.push_back(x+1);
        a.push_back(-1);
      }
    }
    //cout << "--- Answer ---" << endl;
    cout << a.size() << endl;
    for(auto &v : a) 
      cout << v << " ";
    cout << endl;
  }
  return 0;
}
