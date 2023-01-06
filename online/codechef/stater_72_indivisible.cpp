#include <iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=2;i<100;i++){
            if(a%i&&b%i&&c%i){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}