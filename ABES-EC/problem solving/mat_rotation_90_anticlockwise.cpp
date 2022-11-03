#include <iostream>
using namespace std;
#define n 3
void transpose_mat(int A[][n], int B[][n]) {
  int i, j;
  cout << "t";
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      B[i][j] = A[j][i];
    }
}
void interchange_col(int a[][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      b[i][j] = a[i][n - j - 1];
    }
  }
}
for(int i = 0; i < n; i++) {
  for (int j = 0; j < n; j++) {
    a[i][j]=b[i][j];
  }
  int main() {
    int A[n][n] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int B[n][n], i{}, j{};
    transpose_mat(A, B);
    cout << "Result matrix is " << endl;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
        cout << " " << A[i][j];
      cout << endl;
    }
    return 0;
  }
