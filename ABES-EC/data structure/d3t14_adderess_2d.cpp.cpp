#include <iostream>
using namespace std;
int main() {
  cout << "size of 2d array:";
  int m{};
  int n{};
  cin >> m >> n;
  int a[m][n];
  int i{};
  int j{};
  cout << "enter the index for which u need adderess:";
  cin >> i >> j;
  int lower_bound1{0};
  int upper_bound1{m - 1};
  int lower_bound2{0};
  int upper_bound2{n - 1};
  cout << "by address: " << &a[i][j] << endl;
  cout << "by formula: "<< (a[0] + ((i - lower_bound1) * (upper_bound2 - lower_bound2 + 1) +(j - lower_bound2)))<< endl;
  return 0;
}