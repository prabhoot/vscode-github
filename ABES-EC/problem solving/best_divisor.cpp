#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int arr[50] = {0};
  int j = 0;
  long n = 0;
  cin>>n;
  for (long i = 1; i <= n; i++) {
    if (n % i == 0) {
      arr[j] = i;
      j++;
    }
  }
  for (int i = 0; i < j; i++) {
    int sum = 0;
    int num = arr[i];
    while (num != 0) {
      int a = num % 10;
      sum += a;
      num = num / 10;
    }
    arr[i] = sum;
  }
  int res=0;
  for (int i = 1; i < j; i++) {
    res=max(arr[i],arr[i-1]);
  }
  cout<<res;
  return 0;
}