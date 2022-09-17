#include <iostream>
using namespace std;
int main() {
  char a[]{'h', 'e', 'l', 'l', 'o', '\0'};
  char b[]{"my name is pop"};
  int num[]{1, 2, 3};
  for (auto i : a) {
    cout << i;
  }
  cout << endl;
  for (auto i : a) {
    cout << i;
  }
  cout << endl;
  for (auto i : b) {
    cout << i;
  }
  for (int i : num) {
    cout << i;
  }
  return 0;
}