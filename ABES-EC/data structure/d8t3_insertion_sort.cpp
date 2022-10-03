#include <algorithm>
#include <iostream>
#include <type_traits>
using namespace std;
void print_array(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
void insertion_sort(int a[], int n) {
    int j{};
    int i{};
  for (int i = 0; i < n - 1; i++) {
    for(int j=1;j<n;j++){
        while(a[i]>a[j]){
            swap(a[j],a[j-1]);
        }
    }
    }
  }

int main(){
  int a[]{8, 45, 2, 68, 5, 1};
   int n = sizeof(a)/sizeof(a[0]);
 insertion_sort(a, n);
  print_array(a, n);
  return 0;
}