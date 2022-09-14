//repetition using DAT
#include <iostream>
#include<algorithm>
using namespace std;
int main(){
   int a[]{6,9,5,9,2,0};
   int m{};
   int k{};
   int i{};
   int var{};
   int maxi{};
   while (i<6) {
   maxi=std::max(maxi,a[i]);
  i++;
   }
   int n{maxi};
    int dat[maxi]={};
    int j{};
   while(j<6){
    dat[a[j]]++;
    j++;
   }
while(k<maxi){
    if(dat[k]>1){
        cout<<dat[k];
    }
    k++;
}
for(int i;i<9;i++){
    if(dat[i]>1){
    cout<<a[dat[i]]<<endl;

}}

return 0;
}
