// difference of two sets

#include <iostream>
using namespace std;
void difference_of_sets(int n, int a[], int m, int b[]) {
  int c[10] = {0};
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      k++;
      i++;
      j++;
    } else if (a[i] < b[j]) {
      c[k] = a[i];
      k++;
      i++;
    } else {
      c[k] = a[i];
      k++;
      j++;
    }
  }
  for (int i = 0; i < n + m; i++) {
    if (c[i] != 0) {
      cout << c[i] << " ";
    }
  }
  cout << endl;
}
int main() {
  int a[10] = {1, 3, 4, 5, 6};
  int b[4]{1, 2, 3, 4};
  int n = 5;
  int m = 4;
  difference_of_sets(n, a, m, b);
  return 0;
}
