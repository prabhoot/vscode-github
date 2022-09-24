#include <iostream>
using namespace std;
int main() {
  int n{};
  int j{};
  cin >> n;
  for (int i{1}; i <= n; i++) {
    for (int j{};j<= n-i; j++) {
      cout <<" ";
    }
    
for(int k{1};k<=i;k++){
    cout<<i-j-k+1;
}
    
for(int l{2};l<=i;l++){
    cout<<l;
}
cout << endl;
  }
  return 0;
}