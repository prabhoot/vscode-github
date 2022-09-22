#include <iostream>
using namespace std;
int main(){
    int n{6};
    int flag{};
    //cin>>n;
    for(int i{};i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<n-i;j++){
            if(j==0&&i==0){
                continue;
            }
            else{
                cout<<n-j-i<<" ";
            }
        }cout<<endl;
    }
    return 0;
}