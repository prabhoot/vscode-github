//division hashing
#include <iostream>
#include <cmath>
using namespace std;
int nearest_prime_no(int n){
    int flag{};
    int j=0;
for(int i=n;i>=2;i--){
    for (j = 3; j <= sqrt(i); j++) {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
            return i;
    
}
if (flag==1) {
return 0;
}
else{return 1;}
}
 void hf_division(int a,int ts){
    int temp{};
   cout<< (temp=a%nearest_prime_no(ts))<<endl;
   cout<<nearest_prime_no(ts);
 }
int main(){
    int n{};
    int table_size{};
    cout<<"enter table size";
    cin>>table_size;

    cout<<"no. of elements  ";
 cin>>n;
    int a[n];
 for(int i=0;i<n;i++){
       cin>>a[i];
 hf_division(a[i],table_size);
        
 
 }
    return 0;
}