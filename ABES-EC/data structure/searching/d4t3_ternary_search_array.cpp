#include <iostream>
using namespace std;
int ternary_search(int a[], int n, int search_key, int low, int high) {
  int mid1{};int mid2{};
  while (low <= high){
    mid1 = low +( (high-low) / 3);
    mid2 = high - (high-low) / 3;
    if (search_key == a[mid1]){
      cout << search_key << "found at index" << mid1;
      return 0;
    } else if (search_key == a[mid2]){
      cout << search_key << " found at index " << mid2;
      return 0;
    } else if (search_key < a[mid1]){
      high = mid1 - 1;
    } else if (search_key > a[mid2]){
      low = mid2 + 1;
    } else{
      low = mid1 + 1;
      high = mid2 - 1;
    }
  }
  return 0;
}
int main() {
  int n=5;
  int a[]={1,2,3,4,5,6,7,8,9,29};
  int search_key{29};
  int low{0};
  int high{9};
  ternary_search(a,n,search_key,low,high);
  return 0;
} 