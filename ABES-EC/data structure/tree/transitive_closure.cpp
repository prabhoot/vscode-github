#include <cstdlib>
#include <iostream>
#define mat_size 4
using namespace std;

int sum[mat_size][mat_size];
int t[mat_size][mat_size];
int transitive_closure(int a[mat_size][mat_size], int n) {
  int t = n - 1;
  int temp2[mat_size][mat_size];
  while (t--) {
    for(int i=0;i<mat_size;i++){
        for(int j=0;j<mat_size;j++){
            int num=0;
            for(int k=0;k<mat_size;k++){
                num=t[i][k]*sum[k][j];
            }

        }
    }
     }
}
int main() {
  struct node *root = NULL;
  int adj_mat[mat_size][mat_size];
  for (int i = 0; i < mat_size; i++) {
    for (int j = 0; j < mat_size; j++) {
      cin >> adj_mat[i][j];
      cin >> t[i][j];
      cin >> sum[i][j];
    }
  }

  return 0;
}