#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  int tCase, arrSize, min;
  cin >> tCase;
  while(tCase--) {
    cin >> arrSize;
    vector<int> arr(arrSize);
    min = 10000;
    for (int i=0; i<arrSize; i++) {
      scanf("%d", &arr[i]);
    }

    sort(arr.begin(), arr.end());

    for (int i=0; i<arrSize - 1; i++){
      if (arr[i+1] - arr[i] < min) {
        min = arr[i+1] - arr[i];
      }
    }
    cout << min << endl;
  }
  return 0;
}