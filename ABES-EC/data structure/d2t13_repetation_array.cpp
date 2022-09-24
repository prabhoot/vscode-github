// repetition using DAT
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int a[]{3,2,1,4,5,4};
  int m{6};
  int k = 0;
  int i{};
  int var{};
  int maxi{};
  int j{};
  while (i < 6) {
    maxi = std::max(maxi, a[i]);
    i++;
  }
  
  int dat[maxi+1] = {};
   
  for (int i; i < 6; i++) {
    dat[a[i]]++;
  }
  for (int i=0;i<6;i++){
    cout<<dat[i]<<endl;
  }
 
    for(i=0 ; i<maxi+1 ; i++){
        if(dat[i]>1){
            cout<<i<<" is repeated"<<endl;
        }
        else if(dat[i]==1){
            cout<<i<<" is not repeated"<<endl;
        }
        else if (dat[i]==0){
            cout<<i<<" is missing"<<endl;
        }
    }

  return 0;
}
