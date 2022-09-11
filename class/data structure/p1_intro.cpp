#include <ios>
#include <iostream>
using namespace std;
int main() {
  int n{34};

  int *p{&n};
  int *q{nullptr};
  cout << (p) << endl << n << endl << q;

  return 0;
}