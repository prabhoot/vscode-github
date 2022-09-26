#include <iostream>
using namespace std;
int reversal(int a[],int n){
if(a[n]==0){
    return a[n-1];
}
else{
    reversal(a, n);
    cout<<a[n];
}
    return 0;
}
int main(){
   int n{};
  cin>>n;
  int a[n];
for(int i{};i<n;i++){
 cin>>a[i];
}
reversal(a, n);
    return 0;
}