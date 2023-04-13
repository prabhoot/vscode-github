// symmetric difference

#include <iostream>
using namespace std;
void sym_difference_of_sets(int n, int a[], int m, int b[]) {
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
      c[k] = b[i];
      k++;
      j++;
    }
  }
   while (i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    while (j<n) {
    c[k]=b[j];
    k++;
    j++;
    }
  for (int i = 0; i < k; i++) {
    if (c[i] != 0) {
      cout << c[i] << " ";
    }
  }
  cout << endl;
}
int main() {
  int a[6] = {1, 2, 3, 4, 5, 8};  
  int b[4]{2, 3, 4, 7};  
  int n = 6;
  int m = 4;
  sym_difference_of_sets(n, a, m, b);
  return 0;
}
