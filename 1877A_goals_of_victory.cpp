// 1877A Goals of Victory
// https://codeforces.com/problemset/problem/1877/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 9
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {

  //Teams: T1 T2 T3
  //Matches: M12, M13, (M21 is already done), M23
  //Efficiencies: E1 = (M12.T1 - M12.T2) + (M13.T1 - M12.T3)  //known
  //Efficiencies: E2 = (M12.T2 - M12.T1) + (M23.T2 - M23.T3)  //known
  //Efficiencies: E3 = (M13.T3 - M13.T1) + (M23.T3 - M23.T2)  //Have to find out
  //to eliminate few terms, add (since we recognize few terms are repeating with + and -)
  //  E1 + E2 + E3 = (lot of cancellations .. eg : E1.M12.T1 - E2.M12.T1)
  //  E1 + E2 + E3 = 0

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int e = 0;
    n--;
    while(n--) {
      int a;
      cin >> a;
      e += a;
    }
    cout << -1 * e << endl;
  }
  return 0;
}
