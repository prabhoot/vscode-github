#include <iostream>
using namespace std;
int ternary_search(int a[], int n, int search_key, int low, int high) {
  int mid1{};
  int mid2{};
  while (low <= high) {
    mid1 = low + (low + high) / 3;
    mid2 = high - (low + high) / 3;
    if (search_key == a[mid1]) {
      cout << search_key << "found at index" << mid1;
      return 0;
    } else if (search_key == a[mid2]) {
      cout << search_key << " found at index " << mid2;
      return 0;
    } else if (search_key < a[mid1]) {
      high = mid1 - 1;
    } else if (search_key > a[mid2]) {
      low = mid2 + 1;
    } else {
      low = mid1 + 1;
      high = mid2 - 1;
    }
  }
  cout << search_key << " search key not found ";
  return 0;
}
int main() {
  int n{};
  cin >> n;
  int a[n];
  for (int i{}; i < n; i++) {
    cin >> a[i];
  }
  int search_key{};
  cin >> search_key;
  int low{};
  int high{};
  cin >> low >> high;
  ternary_search(a,n,search_key,low,high);

      return 0;
} 