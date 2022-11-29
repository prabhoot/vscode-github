#include <iostream>

using namespace std;
void mergearray(int A[], int m, int B[], int n) {
  int i = 0;
  int j = 0;
  int k = 0;
  int c[22];
  while (i < m && j < n) {
    if (A[i] < B[j]) {
      c[k] = A[i];
      i++;
      k++;
    } else {

      c[k] = B[j];
      j++;
      k++;
    }
  }
  while (i < m) {
    c[k] = A[i];
    i++;
    k++;
  }
  while (j < n) {
    c[k] = B[j];
    j++;
    k++;
  }
  for (int i = 0; i < k; i++) {
    cout << c[i] << " ";
  }
}

int main() {
  int A[10] = {1, 3, 5, 7, 9, 12, 15, 20, 30, 40};
  int B[12] = {2, 4, 6, 10, 12, 15, 18, 20, 25, 30, 50, 90};
  mergearray(A, 10, B, 12);
  cout<<" ";
  return 0;
}