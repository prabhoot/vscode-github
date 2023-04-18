#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  double p, x, y, z;
  while (t--) {
    cin >> p >> x >> y >> z;
    if (z == 1) {
      p = p + ((p * y) / 100);
    } else {
      p = p - (p * x) / 100;
    }
  cout << fixed << setprecision(10) << p<<endl;
  }
  return 0;
}