// Welcoming Grand Children
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  for (int i = 1; i <=n; i++) {
    if (v[i-1] != i) {
      cout << i;
      break;
    }
  }
  return 0;
}