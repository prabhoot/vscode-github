#include <iostream>
using namespace std;
int main() {
  int i{};
  int temp{};
  int n{6};
  int index{3};
  int loc{index};
  int insert_no{29};
  int a[100]{2, 9, 3, 8, 6, 1};
  while (i < n) {
    if (i == loc) {
      for (int j = n + 1; j >= loc; j--) {
        a[j] = a[j - 1];
      }
    }
    i++;
  }
  a[loc] = insert_no;
  for (int i = 0; i < n + 1; i++) {
    cout << a[i] <<" ";
  }
  cout<<endl;
  return 0;
}