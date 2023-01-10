#include <climits>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans=7;
    int a[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if(max<a[i]&&i<7){
        max=a[i];
      }
    }
    for (int i = 7; i < n; i++) {
      if (a[i]<=max){
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}