#include <iostream>
using namespace std;
void fun(int n) {
  if (n == 0) {
    return;
  }
  cout << n << " ";
  fun(--n);
}
int main() {
  fun(5);
  return 0;
//TODO:some do...
// NOTE: a note ...
// [x]:todo done
}