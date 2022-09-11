#include <iostream>
using namespace std;
int main() {
  int n{5};
  for (int i = 1; i <= n; i++) {
    int temp{70- i};
    for (int j = 1; j <= i; j++) {
      cout << char(temp);
      temp++;
    }
    cout << endl;
  }
  return 0;
}