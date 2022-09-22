#include <iostream>
using namespace std;
int main(){
int m{};
int n{};
cin >> m >> n;
int a[m][n];
for (int i{}; i <= m; i++) {
for (int j{}; j <= n; j++) {
a[i][j]=0;
  }
}
// for(int j=0;j<n;j++){
//     for(int k=0;k<n-i;k++){ 
//         cout<<"k";
//     }
// }
a[0][1]=1;

for (int i{}; i < m; i++) {
for (int j{1}; j < n; j++) {
a[i+1][j]=a[i][j]+a[i][j-1];
  }
}
for (int i{}; i < m; i++) {
for (int j{}; j < n; j++) {
if(a[i][j]>0){cout<<" "<<a[i][j];}
  }
  cout<<endl;
}
    
    return 0;
}