#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n=0;
  vector<int> v;
  int temp=0;
  for(int i=0;i<n;i++){
    cin>>temp;
  }
  int value =0;
  cin>>value;
  value--;
  v.erase(value);
  int a,b;
  cin>>a>>b;
  v.erase((find(v.begin(),v.end(),a)),(find(v.begin(),v.end(),b)));
  for(auto i:v){
      cout<<i<<" ";
  }
    return 0;
}
