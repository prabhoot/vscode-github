#include <algorithm> 
#include <iostream> 

using namespace std; 

int m1{2},n1{3},m2{3},n2{2}; 

void multiplication_mat(int &r1, int &c1, int &r2, int &c2) { 

int a[10][10]={{2,3,4},{2,3,4}}; 

int b[10][10]={{2,3},{3,4},{4,5}}; 

if (r2 == c1) {int c[10][10]{}; 

cout << "Multiplication of given two matrices is:\n"; 

for (int i{}; i < r1; i++) { 

for (int j{}; j < c2; j++) { 

for (int k{}; k < c1; k++) { 

c[i][j] += a[i][k] * b[k][j];} 

cout << c[i][j] << "  ";} 

cout<<endl;}} 

if (r2 != c1) {
  cout << "multiplication not possible!! invalid input of indices\n";
  }}

int main(){multiplication_mat(m1, n1, m2, n2); 

return 0;} 