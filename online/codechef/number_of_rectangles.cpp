#include <iostream>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    long all_sub = ((n * (n + 1)) * (m * (m + 1))) / 4;
    long sub = n * m;
    long ans = all_sub - sub;
    cout << ans << endl;
  }
  return 0;
}