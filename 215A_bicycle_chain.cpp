// 215A Bicycle Chain
// https://codeforces.com/problemset/problem/215/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  //rear wheel axle                          pedal axle
  //'m' stars                                'n' stars
  // bm > .. > b1 > 0                        an > .. > a1 > 0
  // gear ratio: bj/ai

  int n;
  cin >> n;
  vector<int> va(n);
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    va[i] = a; 
  }

  int m;
  cin >> m;
  vector<int> vb(m);
  for(int j = 0; j < m; j++) {
    int b;
    cin >> b;
    vb[j] = b;
  }

  vector<int> vgr;
  for(int j = 0; j < m; j++) {
    for(int i = 0; i < n; i++) {
      if(vb[j] % va[i] == 0) {
        vgr.push_back((vb[j] / va[i]));
      }
    }
  }

  sort(vgr.begin(), vgr.end());
  int c = 0;
  for(int i = vgr.size()-1; i >= 0; i--) {
    if(vgr[i] == vgr[vgr.size()-1]) {
      c++;
    } 
    else {
      break;
    }
  }

  cout << c << endl;

  return 0;
}
