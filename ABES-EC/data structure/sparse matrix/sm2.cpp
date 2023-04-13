// Program for 1-D array implementation of Lower Traingular Sparse Matrix
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int mat[5][5] = {{1, 0, 0, 0, 0},
                   {11, 12, 0, 0, 0},
                   {21, 22, 23, 0, 0},
                   {31, 32, 33, 34, 0},
                   {41, 42, 43, 44, 45}};
  vector<int> v(15);
  //   for (int i = 0; i < 5; i++) {
  //     for (int j = 0; j <= i; j++) {
  //       v.push_back(mat[i][j]);
  //     }
  //   }
  //   for (auto i : v) {
  //     cout << i << " ";
  //   }
  //   cout << endl;
  //   int i=3,j=3;
  //     int x = (i * (i - 1)) / 2 + j-1;
  //   cout << v[x];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (mat[i][j] != 0) {
        int x = ((i * (i - 1)) / 2 +j);
        v[x] = mat[i][j];
      }
    }
  }
  for(auto i:v){
    cout<<i<<" ";
  }
  return 0;
}