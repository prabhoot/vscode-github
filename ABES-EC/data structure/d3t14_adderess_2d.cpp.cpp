#include <iostream>
using namespace std;
int main(){
int m{};
int n{};
cin >> m >> n;
int a[m][n];
// for (int i{}; i < m; i++) {
// for (int j{}; j < n; j++) {
//cin >> a[i][j];
//   }
// }
  int i{};
  int j{};  
  cin>>i>>j;
int lower_bound1{0};
int upper_bound1{m-1};
int lower_bound2{0};
int upper_bound2{n-1};
  // int byte_size{sizeof(a[m][n]/a[0][0])};
cout<<&a[i][j]<<endl;
cout<<(a[0]+((i-lower_bound1)*
(upper_bound2-lower_bound2+1)+(j-lower_bound2)))
<<endl;
  return 0;
}