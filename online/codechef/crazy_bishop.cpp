#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
int main(){
   int t{};
  cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n==1){
        cout<<"0\n";
    }
    else {
    cout<<(2*n-(n/2)-3)<<endl;
    }
}
    return 0;
}