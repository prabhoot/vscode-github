#include <iostream>
using namespace std;

int main(){
    int f{1};
   int sign{1};
    double sum{};
    int n{};
    cin>>n;
 for(int i=1;i<=n;i++){
    f=f*i;
        sum+=(1.0/(i*f))*sign;
        sign*=-1;
    }
    cout<<sum;
    return 0;
}