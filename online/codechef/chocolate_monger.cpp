#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int temp = 0;
    map<int, int> map;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> temp;
      map[temp]++;
    }
    temp = map.size();
    x = n - x;
    cout << min(temp, x) << endl;
  }
  return 0;
}