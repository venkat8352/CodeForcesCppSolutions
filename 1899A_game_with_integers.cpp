// 1899A Game With Integers
// https://codeforces.com/problemset/problem/1899/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 4
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    bool first = false;

    if(n%3 == 0) {
      // vanya has to do +1 or -1   (only after doing this, we can evaluate win or loss)
      // at this point (n-1) or (n+1) won't be divisible by 3
      // vova can do reverse of vanya (-1 or +1) to keep the number same .. 
      // hence repeats till infinity .. (vova wins)
      cout << "Second" << endl;
    }
    else if(n%3 == 1) {
      // vanya can simply do -1 and win
      cout << "First" << endl;
    }
    else if(n%3 == 2) {
      // vanya can simply do +1 and win
      cout << "First" << endl;
    }

  }
  return 0;
}
