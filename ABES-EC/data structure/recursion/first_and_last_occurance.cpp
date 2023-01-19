#include <iostream>
using namespace std;
int last_occ(int *arr, int n, int i, int key) {
  cout << "n";
  if (i == n) {
    cout << "m";
    return -1;
  }
  if (last_occ(arr, n, i + 1, key) != -1) {
    cout << "a";
    return last_occ(arr, n, i + 1, key);
  }
  if (arr[i] == key) {
    cout << " b ";
    return i;
  }
  return -1;
}
int first_occ(int *arr, int n, int i, int key) {
  if (i == n) {
    return -1;
  }
  if (arr[i] == key) {
    return i;
  } else {
    return first_occ(arr, n, i + 1, key);
  }
}
int main() {
  int arr[5] = {10, 3, 1, 4, 1};
  // cout << first_occ(arr, 5, 0, 1);
  cout << last_occ(arr, 5, 0, 1);
  return 0;
}