#include <cmath>
#include <iostream>
using namespace std;
int no_of_digits(int n, int temp) {
  if (n == 0)
    return 1;
  int count = 0;
  while (n != 0) {
    n = n / 10;
    ++count;
  }
  return count;
}
void hf_midsqure(long a, int ts,int v) {
  int c=v;
   int temp1{};
  long long temp{};
  temp = a * a;
  int no_digit = no_of_digits(temp, 1) / 2;
  {
    while (no_digit--) {
      temp=temp/10;
    }  
  }
  temp1=temp;
  while (v--) {
   temp1=temp1/10;
  }
 temp-=temp1*pow(10,c);
  cout<<temp;
}
int main() {
  int n{};
  int no_to_save{};
  int v{};
  int table_size{};
  no_to_save=no_of_digits(table_size-1,1);
 cout << "enter table size";
  cin>>table_size;
  cout << "no. of elements  ";
 cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
   cin >> a[i];
    hf_midsqure(66874, table_size,no_to_save);
 }
  return 0;
}