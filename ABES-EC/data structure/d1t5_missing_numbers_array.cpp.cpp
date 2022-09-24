//using DAT
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
   int n{};
   int max_no{};
  cin>>n;
  int a[n];
for(int i{};i<n;i++){
 cin>>a[i];
}
for(int i{};i<n;i++){
max_no=std::max(max_no,a[i]);
}
int b[max_no+1];
for(int i=0;i<=max_no;i++){
  b[i]=0;
}
for(int i=0;i<n;i++){
b[a[i]]++;
}
for(int i=0;i<=max_no;i++){
  if(b[i]>1){
    cout<<i<<" is repeated";
  }
  else if(b[i]==1){
    cout<<i<<" is not repeated";
  }
  else if(b[i]==0){
    cout<<i<<" is missing";
  }
  cout<<endl;
}
  return 0;
}