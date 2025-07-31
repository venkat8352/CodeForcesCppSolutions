// 116A Tram
// https://codeforces.com/problemset/problem/116/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int c  = 0; //current number of people
  int mc = 0; //minimum capacity
  int n;
  cin >> n;
  while(n--) {
    int a, b;
    cin >> a >> b;
    c -= a; //exit
    c += b; //enter
    if(c > mc) mc = c; //record the max number of people after train moves
  }
  cout << mc << endl;
  return 0;
}
