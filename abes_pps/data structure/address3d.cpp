#include <iostream>
using namespace std;
int main(){
int m{};
int n{};
int o{};
cin >> m >> n>>o;
int a[m][n][o];
// for (int i{}; i < m; i++) {
// for (int j{}; j < n; j++) {
//cin >> a[i][j];
//   }
// }
  int i{};
  int j{};
  int k{};  
  cin>>i>>j>>k;
int lower_bound1{0};
int upper_bound1{m-1};
int lower_bound2{0};
int upper_bound2{n-1};
int lower_bound3{0};
int upper_bound3{o-1};
  // int byte_size{sizeof(a[m][n]/a[0][0])};
cout<<&a[i][j][k]<<endl;
cout<<(a[0][0]+((i-lower_bound1)*(upper_bound2-lower_bound2+1)*(upper_bound3-lower_bound3+1)+(j-lower_bound2)*(upper_bound3-lower_bound3+1)+k-lower_bound3))<<endl;
  return 0;
}
