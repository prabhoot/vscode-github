#include <iostream>
using namespace std;
int max_no(int a, int b) {
 if(a>b){return a;}
 return b;
}
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
 cout<<max_no(max_no(max_no(a, b),c),d);
  return 0;
}