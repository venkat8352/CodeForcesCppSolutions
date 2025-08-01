// Submission is All You Need
// https://codeforces.com/contest/2130/problem/0
// 01/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {

    int n; 
    cin >> n;
    vector<int> vi(n);
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      vi[i] = x;
    }

    //almost always sum(S') > mex(S')
    //  because: mex({1, 2, 3, .. }) is   0 
    //           sum({1, 2, 3, .. }) is > 0
    //but only when S' = {0},  mex(S') = 1,  sum(S') = 0 
    //Hence to maximize score, 
    //  when S' = {0}, take mex(S')
    //      otherwise, take sum(S')

    //sort(vi.begin(), vi.end());
    int sc = 0;
    for(int i = 0; i < n; i++) {
      if(vi[i] == 0) vi[i] = 1;
      sc += vi[i];
    }
    cout << sc << endl;

  }
  return 0;
}
