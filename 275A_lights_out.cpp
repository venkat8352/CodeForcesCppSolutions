// 275A Lights Out
// https://codeforces.com/problemset/problem/275/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 19/07/2025

#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a[3][3];
  int o[3][3];
  for(int i = 0; i < 3; i++)  {
    for(int j = 0; j < 3; j++) {
      o[i][j] = 1;
      int x;
      cin >> x;
      a[i][j] = x % 2;
    }
  }
  for(int i = 0; i < 3; i++)  {
    for(int j = 0; j < 3; j++) {
      if(a[i][j]) {
        o[i][j] = (o[i][j] + 1)%2; //that cell
        if(j!=0) o[i][j-1] = (o[i][j-1] + 1)%2; //left cell
        if(j!=2) o[i][j+1] = (o[i][j+1] + 1)%2; //right cell
        if(i!=0) o[i-1][j] = (o[i-1][j] + 1)%2; //up cell
        if(i!=2) o[i+1][j] = (o[i+1][j] + 1)%2; //down cell
      }
    }
  }
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << o[i][j];
    }
    cout << endl;
  }
  return 0;
}
