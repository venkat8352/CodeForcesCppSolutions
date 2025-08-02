//  Target Practice
//  https://codeforces.com/problemset/problem/1873/C
//  https://www.tle-eliminators.com/cp-sheet
//  02/08/2025

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int p = 0;
    for(int i = 0; i < 10; i++) {
      for(int j = 0; j < 10; j++) {
        char c;
        cin >> c;
        if(c == '.') continue;
        //first way of solving:   
        //    have a hardcoded 10x10 matrix with values as points
        //second way of solving:  
        //    write painful equations for the square's  (up || down || left || right)
        //third way of solving:
        //    notice the symmetry of all 4 quadrants
        //        1    2
        //        3    4
        //    if we can map a point (in any quadrant) to quadrant 1, we can figure the value easily
        //  
        //    if a point lies in quadrant 2 .. map it to quadrant 1 
        //        (x<=4) && (y>=5)
        //        eg: y==9 -> y==0, y==8 -> y==1, y==7 -> y == 1  (i.e., new_y = 9 - old_y)
        //    if a point lies in quadrant 3 .. map it to quadrant 1 
        //        (x>=5) && (y<=4)
        //        eg: x==9 -> x==0, .., x==5 -> x==4 (i.e., new_x = 9 - old_x)
        //    if a point lies in quadrant 4 .. map it to quadrant 2 (new_x = 9-old_x) and then map it to quadrant 1 (new_y = 9-old_y)
        //        (x>=5) && (y>=5) 
        //    
        //    so: 
        //    ((x<=4) && (y>=5)) update_y
        //    ((x>=5) && (y<=4)) update_x
        //    ((x>=5) && (y>=5)) update_x, update_y
        //    
        //    take common:
        //    ((x<=4) && (y>=5)) update_y
        //    ((x>=5) && (y>=5)) update_y
        //         --> 'x' can be anything .. so only 'y' is important
        //    ((x>=5) && (y<=4)) update_x
        //    ((x>=5) && (y>=5)) update_x
        //         --> 'y' can be anything .. so only 'x' is important
        int x = i, y = j;
        if(y>=5) y = 9-y;
        if(x>=5) x = 9-x;
        //now that (x,y) is a point on quadrant 1, need to figure out the value based on pattern
        //     0 1 2 3 4 (y)
        //  0  1 1 1 1 1 
        //  1  1 2 2 2 2
        //  2  1 2 3 3 3
        //  3  1 2 3 4 4
        //  4  1 2 3 4 5
        // (x)
        // 
        // for better correlation, can take the scale as (x+1) and (y+1)
        //     1 2 3 4 5 (y+1)
        //  1  1 1 1 1 1 
        //  2  1 2 2 2 2
        //  3  1 2 3 3 3
        //  4  1 2 3 4 4
        //  5  1 2 3 4 5
        // (x+1)

        // say we want to detect point 4 : 
        //   (4, 4)  (4, 5)  
        //   (5, 4)

        // say we want to detect point 3 : 
        //   (3, 3)  (3, 4)  (3, 5)
        //   (4, 3)
        //   (5, 3)
        // min(x+1, y+1) should do the trick

        p += min(x+1, y+1);
      }

    }
    cout << p << endl;
  }
  return 0;
}
