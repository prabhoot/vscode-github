#include <cstddef>
#include <iostream>
using namespace std;
int main() {
  int sum{};
  int n{};
  cin>>n;
  int a[n];
  for (int i{};i<n;i++) {
 cin>>a[i];
  }
   for (auto i : a) {
    sum += i;
  }
  cout << sum;

  return 0;
}