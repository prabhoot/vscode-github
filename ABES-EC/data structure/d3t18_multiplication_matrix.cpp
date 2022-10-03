#include <algorithm>
#include <iostream>
using namespace std;
void extracted(int &r1, int &c1, int &r2, int &c2) {
  int a[10][10];
  int b[10][10];
  if (r2 == c1) {
    int c[10][10]{};
    for (int i{}; i < r1; i++) {
      for (int j{}; j < c1; j++) {
        cin >> a[i][j];
      }
    }

    for (int i{}; i < r2; i++) {
      for (int j{}; j < c2; j++) {
        cin >> b[i][j];
      }
    }
    for (int i{}; i < r1; i++)
      for (int j{}; j < c2; j++)
        for (int k{}; k < c1; k++) {
          c[i][j] += a[i][k] * b[k][j];
        }
    cout << "OUTPUT2 :" << endl;
    for (int i{}; i < r1; i++) {
      for (int j{}; j < c2; j++) {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
  }
   if (r2 != c1){cout << "multiplication not possible!! invalide input of indices";}
}
int main() {
  int m1{}, n1{}, m2{}, n2{};
  cout << "Input indices:" << endl;
  cin >> m1 >> n1;
  cin >> m2 >> n2;
  extracted(m1, n1, m2, n2);
  return 0;
}
