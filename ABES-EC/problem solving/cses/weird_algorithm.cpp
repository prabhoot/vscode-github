//by prabhoot abes cse 2025
#include <iostream>
using namespace std;
void function(long n) {
  cout << n << " ";
  if (n == 1) {
    return;
  }
  if (n%2 == 0) {
    n = n / 2;
  } else {
    n = 3 * n + 1;
  }
  return function(n);
}
int main() {
  long n = 0;
  cin >> n;
  function(n);
  return 0;
}