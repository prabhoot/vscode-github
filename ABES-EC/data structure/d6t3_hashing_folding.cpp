#include <cmath>
#include <iostream>
using namespace std;
int sum_of_digits(int n){
    int c=n;
    int a=c/10;
    int b=n-a*10;
    return a+b;
}
int no_of_digits(int n) {
  if (n == 0)
    return 1;
  int count = 0;
  while (n != 0) {
    n = n / 10;
    ++count;
  }
  return count;
}
void hf_folding(int n, int ts) {
  int temp{};
  int a=no_of_digits(ts-1);
  while(n!=0){
    temp+=n%100;
    n=n/100;
  }
  int c=(pow(10,a));
  cout<<temp%c;
}
int main() {
  int n{1};
  int no_to_save{};
  int v{};
  int table_size{100};
 // cout << "enter table size";
  //cin>>table_size;
  //cout << "no. of elements  ";
 // cin >> n;
  int a[n];
  //for (int i = 0; i < n; i++) {
   // cin >> a[i];
    hf_folding(66874, table_size);
 // }
  return 0;
}