// Program for Warshall's Algorithm for APSP
#include <algorithm>
#include <cstdint>
#include <iostream>
using namespace std;
int w[4][4] = {{0, 50, 0, 0}, {0, 0, 10, 20}, {25, 0, 0, 0}, {0, 0, 5, 0}};
void apsp_floyd_warshall(int v) {
  int d[v][v];
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      if (w[i][j] == 0) {
        if (i != j) {
          d[i][j] = INT16_MAX /2;
        } else {
          d[i][j] = 0;
        }
      } else {
        d[i][j] = w[i][j];
      }
    }
  }
  for (int k = 0; k < v; k++) {
    for (int i = 0; i < v; i++) {
      for (int j = 0; j < v; j++) {
        int x = d[i][j];
        int y = d[i][k] + d[k][j];
        d[i][j] = min(x, y);
      }
    }
  }
  for (int i = 0; i < v; i++) {
    for (int j = 0; j < v; j++) {
      cout << d[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int v = 0;
  v = 4;
  cout<<"the required answer is:\n";
  apsp_floyd_warshall(v);
  return 0;
}