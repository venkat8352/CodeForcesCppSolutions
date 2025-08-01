// 34B Sale
// https://codeforces.com/problemset/problem/34/B
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 01/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  vector<int> vi(n);
  for(int i = 0; i < n; i++) {
    cin >> vi[i];
  }

  sort(vi.begin(), vi.end());
  int e = 0; //earn
  for(int i = 0; i < n; i++) {
    if(vi[i] < 0) { //take only negative price
      e += -1 * vi[i]; //-ve because bob get's money
      m--;
    }
    if(m == 0) break;
  }
  cout << e << endl;

  return 0;
}
