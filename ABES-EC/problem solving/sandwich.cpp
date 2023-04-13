#include <iostream>
using namespace std;
int main() {
  int n = 10000;
  int c = 5;
  int sum = 0;
  int remainder = 0;
  while (n >=c-1) {
    sum += n;
    cout<<"n";
    n = n / c;
    remainder += n % c;
  }
  remainder=remainder%c;
  cout << sum + 1+remainder+1;
  return 0;
}