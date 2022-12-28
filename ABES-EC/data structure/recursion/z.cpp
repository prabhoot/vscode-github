#include <climits>
#include <iostream>
using namespace std;
int dat[2089999] = {0};
long catalon_no(long n) {
  if (dat[n]!=0) {
  return dat[n];
  }
  if (n <= 1) { return 1; }
  else {
    long sum = 0;
    for (long i = 0; i < n; i++) {
      sum += catalon_no(n - 1 - i) * catalon_no(i);
    }
    {dat[n]=sum;}
    return sum;
  }
  return 0;
}
int main() {
  long n = 22;
  cout << "catalon number is :  " << endl;
  for (long i = 0; i < n; i++) {
    cout << catalon_no(i) << " ";
  }
  for(int i=0;i<n;i++){
    cout<<dat[i]<<endl;
  }
  return 0;
}
