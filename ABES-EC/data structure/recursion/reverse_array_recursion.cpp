#include <iostream>
#include <shared_mutex>
using namespace std;
void rev(int *arr, int n, int i) {
  if (i >= n / 2) {
    return;
  }
  swap(arr[i], arr[n - i - 1]);
  rev(arr, n, i + 1);
}
int main() {
  int arr[7]{1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  rev(arr, n, 0);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}