//a-b difference of 2 arrays
#include <iostream>
using namespace std;
int main() {
  int a[10] = {1, 3, 5, 7, 9, 12, 15, 20, 30, 40};
  int b[12] = {2, 4, 6, 10, 12, 15, 18, 20, 25, 30, 34, 54};
  int m{10};
  int n{12};
  int c[23]{};
  int i{};
  int j{};
  int k{};
  int flag{};
  while (i < m && j < n) {
    if (a[i] < b[j]) {
     
      i++;
    } else if (a[i] == b[j]) {
      c[k] = b[j];
      i++;
      j++;
      k++;
      flag++;
    }
    if (a[i] > b[j]) {
      c[k] = b[j];
      j++;
      k++;
    }
  }
  while (i >= m && j < n) {
    c[k] = b[j];
    k++;
    j++;
  
  }
  for (int i = 0; i < (k-flag+4); i++) {
    cout << c[i] << endl;
  }
  return 0;
}