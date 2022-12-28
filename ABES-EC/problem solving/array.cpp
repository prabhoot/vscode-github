#include <iostream>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    long a;
    cin >> a;
    long sum = 0;
    long arr[a];
    int n = a;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (long i = 1; i <= n; i++) {
      for (long j = i; j <= n; j++) {
        for (long k = i; k <= j; k++) {
          sum += arr[k];
        }
      }
    }
    sum = (sum) % 998244353;

    cout << sum << endl;
  }
  return 0;
}