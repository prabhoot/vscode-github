#include <iostream>
using namespace std;
#define m 3
#define n 3
void addition_mat(int a[m][n], int b[m][n]) {
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cout << (a[i][j] + b[i][j]) << " ";
    }
    cout << endl;
  }
}
int main() {
  cout << "input 1st 3x3 array:" << endl;
  int a[m][n]{};
  int b[m][n]{};
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cin >> a[i][j];
    }
  }
  cout << "input other 3x3 array:" << endl;
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cin >> b[i][j];
    }
  }
  cout << "Output after addition:" << endl;
  addition_mat(a, b);
  return 0;
}
