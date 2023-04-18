#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int t{};
  cin >> t;
  while (t--) {
    long x = 0;
    cin >> x;
    long m = 0;
    cin >> m;
    int y = 0;
    int power = m % 4;
    if (power == 0 and m != 0)
      power = 4;
    while (x) {
      int digit = x % 10;
      x = x / 10;
      y = (y * 10) + (int(pow(digit, power))) % 10;
    }
    if (y % 7 == 0) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}