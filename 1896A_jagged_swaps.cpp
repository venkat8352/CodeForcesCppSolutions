// 1896A Jagged Swaps
// https://codeforces.com/problemset/problem/1896/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 5
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v(n); 
    int i1 = 0;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      if(v[i] == 1) i1 = i;
    }
    // n = 3  (3p3 permutations = 3! / (3-3)! = 6)
    //  1 2 3   .. already sorted .. YES
    //  1 3 2   .. 1 2 3          .. YES
    //  2 3 1   .. 2 1 3          .. NO
    //  2 1 3   ..                .. NO
    //  3 1 2   ..                .. NO
    //  3 2 1   ..                .. NO
    // intuition : if '1' is anywhere other than index '0' .. it's not possible to move it by swapping
    // eg : x 1 y . . . 
    //      since (x > 1) && (1 < y) : 
    //        it's not a condition for swapping
    //        hence '1' and 'y' can't be swapped => '1' won't move ( => to index '0')
    //        even if z x 1 y   and   (z < x) && (x > 1) .. '1' can come till index '1' but not index '0'
    //              
    // in case '1' is at index 0
    //    n = 3 is YES as seen above
    //    n = 4 (4p4 permutations .. 24 possibilities)
    //        1 2 3 4    .. YES
    //        1 2 4 3    .. YES
    //        1 3 2 4    .. YES
    //        1 3 4 2    .. YES
    //        1 4 2 3    .. YES
    //        1 2 3 4    .. YES
    //        x 1 x x    .. NO   (6 possibilities)
    //        x x 1 x    .. NO   (6 possibilities)
    //        x x x 1    .. NO   (6 possibilities)
    if(i1 != 0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }

  return 0;
}
