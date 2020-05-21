#include <stdio.h>
#include <set>
#include <iostream>
using namespace std;

typedef pair<int,int> pairs;

int main () {
  int t;
  cin >> t;
  string s;
  while(t--) {
    cin >> s;
    set<pairs> visited;
    visited.insert(make_pair(0, 0));
    
    int x = 0, y = 0;    
    int duration = 0;
    for (int i=0; i<s.length(); i++) {
      switch (s[i]) {
        case 'N':
          y = y + 1;
          break;
        case 'S':
          y = y - 1;
          break;
        case 'W':
          x = x - 1;
          break;
        case 'E':
          x = x + 1;
          break;
      }
      pairs curr = make_pair(x, y);
      set<pairs>::iterator it = visited.find(curr);
      if (it == visited.end()) {
        duration = duration + 5;
        visited.insert(curr);
      } else {
        duration = duration + 1;
      }
    }
    printf("%d\n", duration);
  }
  return 0;
}