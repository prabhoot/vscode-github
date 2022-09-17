#include <iostream>
using namespace std;
int main() {
  int t{};
  cin >> t;
  while (t--) {
    int n{};
    int sum{};
    int flag{};
    cin >> n;
    int a[n];
    int b[n];
    for (int i{1}; i <=n; i++) {
      cin >> a[i];
    }

    for (int i{1}; i <=n; i++) {
      cin >> b[i];
    }

    for (int i{1}; i <=n; i++) {
      if (b[i] <= a[i] - a[i - 1]) {
        flag++;
      }
    }
    cout << flag << endl;
  }
  return 0;
}