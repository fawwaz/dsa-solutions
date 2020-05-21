#include <iostream>
using namespace std;

int main() {
  int t, a, b, c, answer = 0;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    if (a + b + c >= 2) {
      answer++;
    }
  }
  cout << answer << endl;
  return 0;
}