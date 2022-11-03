#include <iostream>
using namespace std;
int binary_Search(int arr[], int low,int high, int x) {
  if (high >= low) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == x)
      return mid;
    if (arr[mid] > x)
      return binary_Search(arr, low, mid - 1, x);
    return binary_Search(arr, mid + 1, high, x);
  }
  return -1;
}
int exponential_Search(int arr[], int n, int x) {
  if (arr[0] == x)
    return 0;
  int i = 1;
  while (i < n && arr[i] <= x)
    i = i * 2;
  return binary_Search(arr, i / 2, min(i, n - 1), x);
}

int main() {
  int arr[] = {2, 3, 4, 10, 29};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 29;
  int result = exponential_Search(arr, n, x);
  if (result == -1) {
    cout << "search key is not present in array";
  } else {
    cout << "search key is present at index " << result;
  }
  return 0;
}
