#include <iostream>
using namespace std;
int fib(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return (fib(n - 1) + fib(n - 2));
  }
  return 0;
}
int main() {
  int x=1;
  cout << "n";
  for (int i = 1; i <= 100; i++) {
   x = fib(i);
  }
  cout << x;
  return 0;
}