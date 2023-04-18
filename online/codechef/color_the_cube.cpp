#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        float n=0;
        cin>>n;
        n=ceil(n/2.0);
        int a[6];
        long long int sum=0;
        for(int i=0;i<6;i++){
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(sum*n)<<endl;
    }
    return 0;
}