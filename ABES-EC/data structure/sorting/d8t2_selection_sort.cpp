#include <algorithm>
#include <iostream>
#include <type_traits>
using namespace std;
void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
void selection_sort(int a[], int n) {
    int j{};
  for (int i = 0; i < n - 1; i++) {
    int index_min_no{i};
    for (j= i+1; j < n; j++) {
        
    if (a[j]<a[index_min_no]) {
      index_min_no=j;
    }
  }
  if(index_min_no!=i){
        swap(a[index_min_no],a[i]);
    }
}}
int main(){
  int a[]{8, 45, 2, 29, 5, 1};
   int n = sizeof(a)/sizeof(a[0]);
  selection_sort(a, n);
  print_array(a, n);
  return 0;
}