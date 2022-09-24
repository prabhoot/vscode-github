#include <iostream>
using namespace std;
int power(int a, int n) {
  if (n == 0) {
    return 1;
  } else {
    return (a * power(a, n - 1));
  }
  return 0;
}
int main() {
  int a{};
  cin >> a;
  int n{};
  cin >> n;
  cout << power(a, n);
  return 0;
}