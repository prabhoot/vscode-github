#include <iostream>
using namespace std;
int main() {
  int n{};
  cout << "size of 1d array:";
  cin >> n;
  int a[n];
  int low_bound{};
  int upper_bound{n - 1};
  int byte_size{sizeof(a[n] / a[0])};
  int i;
  cout << "enter the index for which u need adderess:";
  cin >> i;
  cout << "by address: " << &a[i] << endl;
  cout << "by formula: " << (a + (i - low_bound)) << endl;
  return 0;
}