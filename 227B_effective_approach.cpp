// 227B Effective Approach
// http://codeforces.com/problemset/problem/227/B
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  //time limit exceed//   int n;
  //time limit exceed//   cin >> n;
  //time limit exceed//   vector<int> ni;
  //time limit exceed//   for(int i = 0; i < n; i++) {
  //time limit exceed//     int x;
  //time limit exceed//     cin >> x;
  //time limit exceed//     ni.push_back(x);
  //time limit exceed//   }

  //time limit exceed//   int vc = 0;
  //time limit exceed//   int pc = 0; 
  //time limit exceed//   int m;
  //time limit exceed//   cin >> m;
  //time limit exceed//   for(int i = 0; i < m; i++) {
  //time limit exceed//     int x;
  //time limit exceed//     cin >> x;
  //time limit exceed//     for(int vi = 0, pi = n-1; (vi < n-1) || (pi > 0); vi++, pi--) {
  //time limit exceed//       if(ni[vi] == x) {
  //time limit exceed//         vc += vi+1;
  //time limit exceed//         pc += n-(vi+1)+1;
  //time limit exceed//         break;
  //time limit exceed//       }
  //time limit exceed//       if(ni[pi] == x) {
  //time limit exceed//         vc += pi+1;
  //time limit exceed//         pc += (n-1)-pi+1;
  //time limit exceed//         break;
  //time limit exceed//       }
  //time limit exceed//     }
  //time limit exceed//   }

  //time limit exceed//  cout << vc << " " << pc << endl;


  //'distinct' numbers .. 'map' can be used instead of vector

  int n;
  cin >> n;
  map<int, int> mxi; //key: number, value: index of the array
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mxi.insert({x, i});
  }

  long long vc = 0; //vasya comparison count
  long long pc = 0; //petya comparison count
  int m;
  cin >> m;
  for(int i = 0; i < m; i++) {
    int x;
    cin >> x;
    vc += mxi.at(x) + 1;
    pc += (n-1) - mxi.at(x) + 1;
  }

  cout << vc << " " << pc;
  return 0;
}
