// 230A Dragons
// https://codeforces.com/problemset/problem/230/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 01/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {

  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> vp;
  while(n--) {
    int x, y;
    cin >> x >> y;
    if(s > x) {
      s += y;
    }
    else {
      vp.push_back({x, y});
    }
  }

  sort(vp.begin(), vp.end());
  // tries to sort based on 'x' (vp[i].first)
  // and then if few values of 'x' are same, tries to sort based on 'y' (vp[i].second)

  bool can_defeat = true;
  for(auto p : vp) {
    if(s > p.first) {
      s += p.second;
    }
    else {
      can_defeat = false;
      break;
    }
  }

  if(can_defeat) 
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
