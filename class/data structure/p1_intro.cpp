#include <ios>
#include <iostream>
using namespace std;
int main() {
  int n{403404943};
  auto m{9.9};

  int *p{&n};
  int *q{nullptr};
  cout << (p) << endl << n << endl << q;
 // p=&m; int ptr to double compiltion error

 cout <<*p;
  cout << endl << q;
  return 0;
}