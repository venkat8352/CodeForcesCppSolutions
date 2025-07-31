// 144A Arrival of the General
// https://codeforces.com/problemset/problem/144/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 31/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int min_  = 101, max_  = 0; //range of input : [1:100]
  int min_i =   0, max_i = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x  > max_) { //record only the left most (towards [0]) Max number
      max_  = x;
      max_i = i;
    }
    if(x <= min_) { //record the right most (towards [n-1]) Min number
      min_  = x;
      min_i = i;
    }
  }
  int numS = 0; 
  numS += max_i - 0;     //swap so that Max is in [0]
  numS += (n-1) - min_i; //swap so that Min is in [n-1]
  if(max_i >= min_i) {   //if range overlap, 1 swap would be common work (for Min and Max), hence decrement by 1
    numS -= 1;
  }
  cout << numS << endl;
  return 0;
}
