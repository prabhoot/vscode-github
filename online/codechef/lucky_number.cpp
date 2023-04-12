#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    int i = 0;
    while (a % 2 == 0) {
      a = a / 2;
      i++;
    }
    if (i % 2 == 0) {
      cout << "1\n";
    } else {
      cout << "0\n";
    }
  }
  return 0;
}
