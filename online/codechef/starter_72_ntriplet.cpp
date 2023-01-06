#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int t=0;
  cin>>t;
  while(t--){
    vector<int>a;
    long n=0;
    cin>>n;
    int num=n;
    for(long i=2;i<num;i++){
      if(!(n%i)){
      cout<<i<<" ";
        n/=i;
        a.push_back(i);
      }
      else {
      i++;
      }
    }
    if(a.size()==3){
      for(auto i:a){
        cout<<i<<" ";
      }
      cout<<endl;
    }
    else {
    cout<<"-1\n";
    }
  }
  return 0;
}