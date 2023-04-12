#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high) {
  int i = low, j = mid + 1, k = low;
  int c[high + 1];
  while (i <= mid && j <= high) {
    if (a[i] < a[j]) {
      c[k++] = a[i++];
    } else {
      c[k++] = a[j++];
    }
  }
  while (i <= mid) {
    c[k++] = a[i++];
  }
  while (j <= high) {
    c[k++] = a[j++];
  }
  for (int i = low; i <= high; i++) {
    a[i] = c[i];
  }
}

void merge(int a[], int low, int high) {
  if (low < high) {
    int mid = (low + high) / 2;
    merge(a, low, mid);
    merge(a, mid + 1, high);
    merge(a, low, mid, high);
  }
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  merge(a, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}
// input
// 5
// 7 6 1 9 2