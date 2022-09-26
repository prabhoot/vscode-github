#include <iostream>
using namespace std;
int main(){
   int n{};
  cin>>n;
  int a[n];
for(int i{};i<n;i++){
 cin>>a[i];
}
    for(int i{};i<n;i++){
        cout<<a[n-i-1]<<" ";
    }
    return 0;
}