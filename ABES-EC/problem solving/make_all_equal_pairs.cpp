#include <cstdint>
#include <iostream>
#define n 1001
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int dat[n]{0};
    int x=0;
    cin>>x;
    for(int i=0;i<x;i++){
        int c;
        cin>>c;
        dat[c]++;
    }
  int sum=0;
  int maxi=0;
  for(auto i=0;i<n;i++){
    sum+=dat[i];
    if(maxi<dat[i]){
        maxi=dat[i];
    }
  }
  cout<<sum-maxi<<endl;
  }
  return 0;
}