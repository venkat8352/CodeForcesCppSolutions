// 337A Puzzles
// https://codeforces.com/problemset/problem/337/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 01/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> vi;
  for(int i = 0; i < m; i++) {
    int f;
    cin >> f;
    vi.push_back(f);
  }

  int min_ = 1e5;
  sort(vi.begin(), vi.end());  
  //select a window of 'n' puzzles and calculate A-B, track the minimum diff
  for(int i = 0; (i+n-1)<=(m-1); i++) {
    int diff_ = vi[i+n-1]-vi[i];
    if(diff_ < min_) min_ = diff_;
  }
  cout << min_ << endl;

  return 0;
}
