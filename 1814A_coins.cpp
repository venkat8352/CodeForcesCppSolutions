// 1814A Coins
// https://codeforces.com/problemset/problem/1814/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 22
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n, k;
    cin >> n >> k;
    // 2*x + k*y = n;   // x >= 0,  y >= 0
    // since 2 is in the expression, we can think based on if 'n' is even or odd
    // if n is even : 
    //    we can assume y == 0, .. hence 'x' can alone take care of division
    // if n is odd  : 
    //    we definitely need help of 'k' to break it down (since 2*x is even)
    //    if 'k' is even, answer is NO (since 2*x + 2 * (k/2) * y  is always even while 'n' is odd)
    //    if 'k' is odd,  
    //        we can iterate over odd values of 'y' (not even due to 2*x + k * 2 *(y/2) being even while 'n' is odd)
    //        and try to see if n-k*y is even 
    //        if found: YES, break;
    //        else: NO

    if(n%2 == 0) {
      cout << "YES" << endl;
    }
    else {
      if(k%2 == 0) {
        cout << "NO" << endl;
      }
      else {
        bool found = false;
        for(int y = 1; (n - k*y) >= 0; y+=2) {
          if((n-k*y)%2 == 0) {
            found = true;
            break;
          }
        }
        cout << (found ? "YES" : "NO") << endl;
      }
    }
  }
  return 0;
}
