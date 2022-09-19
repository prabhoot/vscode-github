// A-B difference of 2 arrays
#include <iostream>
using namespace std;
int main() {
  int a[10] = {1, 3, 5, 7, 9, 12, 15, 20, 30, 40};
  int b[12] = {2, 4, 6, 10, 12, 15, 18, 20, 25, 30, 34, 54};
  int m{10};
  int n{12};
  int c[23]{};
    int d[23]{};
int e[23]{};

  int i{};
  int j{};
  int k{};
  int flag{};
  while (i < m && j < n) {
    if (a[i] < b[j]) {
      c[k] = a[i];
      i++;
      k++;
    } else if (a[i] == b[j]) {
      i++;
      j++;
      flag++;
    }
    if (a[i] > b[j]) {
      j++;
    }
  }
  while (i < n && j >= n) {
    c[k] = a[i];
    k++;
    i++;
  }
  // difference of 2 arrays




  {}
    int i{};
    int j{};
    int k{};
    int flag{};
    while (i < m && j < n) {
      if (a[i] < b[j]) {

        i++;
      } else if (a[i] == b[j]) {
        d[k] = b[j];
        i++;
        j++;
        k++;
        flag++;
      }
      if (a[i] > b[j]) {
        d[k] = b[j];
        j++;
        k++;
      }
    }
    while (i >= m && j < n) {
      d[k] = b[j];
      k++;
      j++;
    }
  




// Union of 2 arrays
{

  while (i < m && j < n) {
    if (c[i] < d[j]) {
      e[k] = a[i];
      i++;
      k++;
    } else if (c[i] == d[j]) {
      e[k] = b[j];
      i++;
      j++;
      k++;
      flag++;
    }
    if (c[i] > d[j]) {
      e[k] = b[j];
      j++;
      k++;
    }
  }
  while (i >= m && j < n) {
    e[k] = d[j];
    k++;
    j++;
  }
  while (i < n && j >= n) {
    e[k] = c[i];
    k++;
    i++;
  }
  for (int i = 0; i < 22; i++) {
    cout << e[i] << endl;
  }
  return 0;
}