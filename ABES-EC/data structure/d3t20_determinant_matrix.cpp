#include <cstdlib>
#include <iostream>
using namespace std;
#define N 4
int determinantOfMatrix(int mat[N][N], int n){ 
    
     return 0;
      }
int main() {
  int n{};
  cin >> n;
  int c[10][10]{};
    //int a[N][N]{};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>a[i][j];
    //     }
    // }
   int a[N][N] = {{1, 0, 2, -1}, {3, 0, 0, 5}, {2, 1, 4, -3}, {1, 0, 5, 0}};
cout <<"Determinant of the matrix is : " << determinantOfMatrix(a, N);  return 0;
}