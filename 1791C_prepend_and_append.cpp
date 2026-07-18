// 1791C Prepend and Append
// https://codeforces.com/problemset/problem/1791/C
// 18/07/2026

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    string s;
    cin >> s; //getline(cin, s);
    int a = n;
    for(int i = 0, j = n-1; (a>0) && (s[i]!=s[j]) ; i++, j--) {
      a-=2;
    }
    //cout << "--------" << endl;
    cout << a << endl;
    //cout << "--------" << endl;
  }
  return 0;
}
