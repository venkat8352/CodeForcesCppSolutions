// 1788A One and Two
// https://codeforces.com/problemset/problem/1788/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 27
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  //basically have to divide the array into two parts so that multiply on left side == multiply on right side
  // all elements of the array are either '1' or '2'
  //  '1' doesn't matter for multiplication
  //  '2' matters .. but since n can be upto 1000, we can't really multiply the numbers
  //      instead we can count the 2s and divide the array

  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> vi(n+1); // +1 to make it 1-based counting (problem statement is 1-based)
    int c2 = 0;
    for(int i = 1; i <= n; i++) {
      cin >> vi[i];
      if(vi[i] == 2) c2++;
    }
    if(c2%2 == 1) {
      //if odd number of 2's .. can't divide the array
      cout << -1 << endl;
    }
    else {
      int k;
      int c2_ = 0;
      for(int i = 1; i <= n; i++) {
        if(vi[i] == 2) c2_++;
        if(c2_ == c2 / 2) {
          k = i;
          break;
        }
      }
      cout << k << endl;
    }
  }
  return 0;
}
