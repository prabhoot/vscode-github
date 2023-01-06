#include <iostream>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  while (t--) {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    if (a + b == c) {
      cout<<"yes\n";
    }
    else {
    cout<<"no\n";
    }
  }
  return 0;
}