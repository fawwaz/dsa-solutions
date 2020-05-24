#include <iostream>
using namespace std;

int main() {
  int t;
  int a, b;
  int w, h;
  int s;
  cin >> t;
  while(t--) {
    cin >> a >> b;
    w = a > b ? a : b;
    h = a > b ? b : a;
    s = max(w , 2 * h);
    cout << s * s << endl;
  }
  return 0;
}
