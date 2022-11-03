#include <climits>
#include <iostream>
using namespace std;
int partion(int a[], int low, int high) {
  int i = low;
  int j = high + 1;
  int pivot = a[low];
  do {
    do {
      i++;
    } while (a[i] < pivot);
    do {
    j--;
    }while (a[j]>pivot);
        if(i<j){
            int t=a[i];
           a[i]=a[j];
           a[j]=t;

        
    }
  }
 while(i<j);
        int t=a[j];
        a[j]=a[low];
        a[low]=t;    
   return j;
}
void quick_sort(int a[], int low, int high) {
  if (low < high) {
    int j{};
    j = partion(a, low, high);
    quick_sort(a, low, j-1);
    quick_sort(a, j + 1, high);
  }
}
int main() {
  int a[10]{200, 260, 300, 400, 90, 100, 29, 350, 250};
  a[9] = INT_MAX;
for(int i{};i<9;i++){
    quick_sort(a, 0, 9);
    cout<<a[i]<<" ";
}
  return 0;
}
