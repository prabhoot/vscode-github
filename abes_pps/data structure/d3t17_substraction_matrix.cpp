#include <iostream>
using namespace std;
int main() {
  int m{};
  int n{};
  cout<<"INPUT :"<<endl;
  cin >> m >> n;
  int a[m][n];
  int b[m][n];
  int c[m][n];

  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cin >> b[i][j];4
    }
  }
    cout<<"OUTPUT2 :"<<endl;
  for (int i{}; i < m; i++) {
    for (int j{}; j < n; j++) {
      cout << (a[i][j] - b[i][j])<<" ";
    }
    cout << endl;
  }
  return 0;
}
