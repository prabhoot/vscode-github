#include <iostream>
using namespace std;
int main() {
  int n{};
  int h{};
  cin >> n;
  for (int i{1}; i <= n; i++) {
    for (int j{1}; j <= n - i; j++) {
      cout << " ";
    }
    for (int k{1}; k <= i; k++) {
      cout << "*";
    }
    for (int k{2}; k <= i; k++) {
      cout << "*";
    }
    cout << endl;
  }
    for (int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
    cout<<(" ");
}

for(int m{1};m<=2*(n-i)-1;m++){
    cout<<"*";
}
cout<<endl;
    }
    return 0;
}