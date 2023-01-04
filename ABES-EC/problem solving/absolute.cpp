#include <iostream>
using namespace std;
int main(){
int m{};
int n{};
cin >> m >> n;
int a[m][n];
for (int i{}; i < m; i++) {
for (int j{}; j < n; j++) {
cin >> a[i][j];
  }
}
    for (int i{}; i < m; i++) {
for (int j{}; j < n; j++) {
cout<<a[i][j]<<" ";
  }
  cout<<endl;
} 
    return 0;
}