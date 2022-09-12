// merging of 2 arrays
#include <iostream>
using namespace std;
int main() {
  int a[10] = {1, 3, 5, 7, 9, 12, 15, 20, 30, 40};
int b[12] = {2, 4, 6, 10, 12, 15, 18, 20, 25, 30,40,90};
  int m{10};
  int n{12};
  int c[22];
  int i{};
  //   cout<<i;-
  int j{};
  int k{};
  while (i < m && j < n) {
    // cout<<"hello";
    if (a[i] < b[j]) {
      c[k] = a[i];
      i++;
      k++;
    } else {
      c[k] = b[j];
      j++;
      k++;
    }
  }
  while (i >= m&&j<n) {
    c[k] = b[j];
    k++;
    j++;
    cout << "n";
  }
  while (i<n&&j >= n) {
    c[k] = a[i];
    k++;
    i++;
    cout << "t";
  }
  for(int i:c){cout << i<<endl;}
  cout << "bttn";

  return 0;
}