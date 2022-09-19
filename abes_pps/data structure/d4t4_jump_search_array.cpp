#include <iostream>
using namespace std;
int linear_search(int a[], int n, int search_key, int low, int high) {

  for (; low < high; low++) {
    if (a[low] == search_key) {
      cout << low << " is the index of the required key";
      break;
    } else {
      cout << "key is not present in the array";
    }
  }
  return 0;
}
int jump_search(int a[], int n, int search_key, int low, int high, int jump) {
  while (low <high) {
    if (a[low] == search_key) {
      cout << search_key << " found at index " << low;
      return 0;
    } else if (a[low] > search_key) {
      low += jump;
    } else if (a[low] < search_key) {
      high = low - 1;
      low -= jump;
      cout<<"n";
      linear_search(a, n, search_key, low, high);
    } else {
      low += jump;
    }
  }
  return 0;
}
int main() {
  int n{};
  cin >> n;
  int a[n];
  for (int i{}; i < n; i++) {
    cin >> a[i];
  }
  int jump{};
  int low{};
  int high{};
  int search_key{};
  cin >> low >> high >> search_key>>jump;
  jump_search(a, n, search_key, low, high, jump);
  return 0;
}