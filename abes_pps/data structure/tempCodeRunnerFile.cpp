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