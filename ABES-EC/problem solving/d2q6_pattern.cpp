#include <iostream>
using namespace std;
int main() {
  int n{};
  int k{};
  cin >> n;
  int j{};
  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << i + j - 1 << " ";
    }
   for(int j=2;j<=i;j++){
    cout<<(2*i-j)<<" ";
}

    cout << endl;
  }
  return 0;
}
