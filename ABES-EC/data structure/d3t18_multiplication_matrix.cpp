#include <algorithm>
#include <iostream>
using namespace std;
void extracted(int &m1, int &n1, int &m2, int &n2) {
  int a[10][10];
  int b[10][10];
  if (m2 == n1) {
    int c[10][10];
    for (int i{}; i < m1; i++) {
      for (int j{}; j < n1; j++) {
        cin >> a[i][j];
      }
    }
  
   
    for (int i{}; i < m2; i++) {
      for (int j{}; j < n2; j++) {
        cin >> b[i][j];
      }
    }

    for (int i{}; i < m1; i++) {
      for (int j{}; j < n1; j++) {
        c[i][j]={0};
      }
    }
     for (int i{}; i < m1; i++) {
      for (int j{}; j < n2; j++) {
        cout << c[i][j] << " ";
      }
      cout << endl;
    }
    for (int i{}; i < m1; i++) 
      for (int j{}; j < n2; j++) 
        for (int k{}; k < n1; k++) {
          c[i][j] += a[i][k] * b[k][i];
        }
    cout << "OUTPUT2 :" << endl;
    for (int i{}; i < m1; i++) {
      for (int j{}; j < n2; j++) {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
}
  }
int main() {
  int m1{}, n1{}, m2{}, n2{};
  cout << "INPUT :" << endl;
  cin >> m1 >> n1;
  cin >> m2 >> n2;
  extracted(m1, n1, m2, n2);
  return 0;
}
