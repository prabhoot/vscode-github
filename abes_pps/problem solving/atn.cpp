#include <iostream>
using namespace std;
int main(){
    int n{};
    int sum{};
    cin>>n;
    int sign=1;
    // while(n>0){
    //     sum+=n;
    //     n--;
    // }
    
    // for(int i=1;i<=n;i++){4
    //     sum+=i;
    //     }
    //     cout<<sum;
    int f{1};
    
    for(int i=1;i<=n;i++){
        f=f*i;
        sum+=sign*f;
        sign=sign*(-1);
    }
    cout<<sum;

    return 0;
}