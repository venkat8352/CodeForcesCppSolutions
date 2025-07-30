// 339A Helpful Maths
// https://codeforces.com/problemset/problem/339/A
// https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
// 30/07/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  string is;
  cin >> is;

  vector <int> vi;
  for(int i = 0; i < is.length(); i++) {
    if(isdigit(is[i])) 
      vi.push_back(stoi(is.substr(i, 1)));
  }
  sort(vi.begin(), vi.end());

  string os;
  for(int i = 0; i < vi.size(); i++) {
    if(i!=0) os += "+";
    os += to_string(vi[i]);
  }
  cout << os << endl;

  return 0;
}
