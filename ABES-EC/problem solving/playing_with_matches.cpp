#include <iostream>
using namespace std;
int main() {
  int t = 0;
  cin >> t;
  int map[10]{6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  while (t--) {
    int a;
    int sum=0;
    int b;
    cin >> a >> b;
    int temp = a + b;
    while (temp) {
      int x=temp%10;
    sum+=map[x];
    temp/=10;
    }
    cout<<sum<<endl;
  }
  return 0;
}