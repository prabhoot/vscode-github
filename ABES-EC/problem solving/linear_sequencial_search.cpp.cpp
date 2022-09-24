#include <iostream>
using namespace std;
int linear_search(int arr[], int N, int x, int low, int high) {

  for (int i = low; i < N; i++) {
    if (arr[i] == x) {
      cout << x << " found at index " << i;
      return i;
    }
  }
  cout << "not found";
  return -1;
}

int main() {
  int n{5};
  int jump{3};
  // cin>>jump;
 
  //   cin>>n;
  int a[n]{1, 5, 7, 8, 9};
  // for(int i{};i<n;i++){
  //  cin>>a[i];
  // }

  int index[int(n / jump)];
  for (int i{}; i < n; i++) {
    if ((jump + i) > (n - 1)) {
      index[i] = n - 1;
      break;
    }
    index[i] = jump * i;
  }
  int high{n - 1};
  int low{0};
  int search_key{3};
  //  cin>>search_key;
  for (int i = 0; i < n; i++) {
    if (a[index[i]] == search_key) {
      cout << a[index[i]] << " found at " << index[i];
      break;
    } else if (a[index[i]] > search_key) {
      high = index[i] - 1;
      low = index[i - 1];
     linear_search(a, n, search_key, low, high);
      break;
    }
    // else if(index[i]==i){
    //     cout<<search_key<<" not present ";
    // }
  }

  return 0;
}