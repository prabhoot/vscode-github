#include <iostream>
using namespace std;
int power(int a, int n) {
  if (n == 0) {
    return 1;
  } else {
    return (a * power(a, n - 1));
  }
  return 0;
}
int main() {
  int a{};
  cout<<"enter base:"<<endl;
  cin >> a;
  int n{};
  cout<<"enter power:"<<endl;
  cin >> n;
  cout <<"The result of "<<a<<"^"<<n<<" is " << power(a, n)<<endl;
  return 0;
}