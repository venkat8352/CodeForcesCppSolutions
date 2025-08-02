// 1890A Doremy's Paint 3
// https://codeforces.com/problemset/problem/1890/A
// https://www.tle-eliminators.com/cp-sheet  rating 800, problem 
// 02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;

    // b1 b2
    // guaranteed OK

    // b1 b2 b3
    // eq1(b1 + b2)  =  eq2(b2 + b3)
    // this implies that b1 == b3
    // i.e., if two numbers are same: OK. otherwise: NO

    // b1 b2 b3 b4
    // eq1(b1 + b2)  =  eq2(b2 + b3)  =  eq3(b3 + b4)
    // if we consider two equations at once (3c2 = 3 combo's)
    // eq1, eq2 => b1 == b3
    // eq2, eq3 => b2 == b4
    // eq1, eq2 => b1+b2 = b3+b4  => no useful relation can be established
    // so, b1==b3, b2==b4
    // so, if there are two set's of equal elements, it's ok, otherwise not
    // i.e., count of distinct elements should be <= 2   ('1' if all elements are equal)

    // b1 b2 b3 b4 b5
    // eq1(b1 + b2)  =  eq2(b2 + b3)  =  eq3(b3 + b4) = eq4(b4 + b5)
    // if we consider two equations at once (4c2 = 6 combo's)
    // eq1, eq2 => b1 == b3
    // eq2, eq3 => b2 == b4
    // eq3, eq4 => b3 == b5
    // eq1, eq3 => b1+b2 = b3+b4 => not useful
    // eq1, eq4 => b1+b2 = b4+b5 => b1 == b5
    // eq2, eq4 => b2+b3 = b4+b5 => not useful
    // so, b1==b3==b5, b2==b4
    // so, if there are two set's of equal elements, it's ok, otherwise not
    // i.e., count of distinct elements should be <= 2   ('1' if all elements are equal)

    map<int, int> m; //key: number, value : count
    for(int i = 0; i < n; i++) {
      int x; 
      cin >> x;
      m[x]++;
    }
    if(m.size() == 1){
      //all equal elements
      cout << "YES" << endl;
    }
    else if(m.size() == 2){
      int v1 = 0, v2 = 0;
      for(auto x : m) {
        if(v1 == 0) v1 = x.second;
        else if(v2 == 0) v2 = x.second;
      }
      if(abs(v1-v2) <= 1) 
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  
  return 0;
}
