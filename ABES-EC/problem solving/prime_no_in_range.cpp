
#include <iostream>
using namespace std;
void primeInRange(int L, int R) {
  int i, j, flag;

  for (i = L; i <= R; i++) {
    if (i == 1 || i == 0)
      continue;

    flag = 1;
    for (j = 2; j <= i / 2; ++j) {
      if (i % j == 0) {
        flag = 0;
        break;
      }
    }
    if (flag == 1)
     cout<<i;
  }
}
int main() {

  int L = 1;
  int R = 10;
  primeInRange(L, R);

  return 0;
}
