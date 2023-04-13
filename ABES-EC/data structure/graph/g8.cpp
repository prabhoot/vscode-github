// Program for Warshall's Algorithm for Transitive Closure
// not working 
#include <iostream>
using namespace std;
const int rows = 4;
const int cols = 4;
int** multiplyMatrices(int mat1[][cols], int mat2[][cols]) {
    // int** result = new int*[rows];
    int **result={};
    for (int i = 0; i < rows; i++) {
        result[i] = new int[cols];
    }
    // Multiply matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return result;
}
void display(int **x){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int adj_mat[rows][cols]= {{0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}, {1, 1, 0, 0}};
    int **x=multiplyMatrices(adj_mat,adj_mat);
    display(x);
    return 0;
}