#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<=b/3){
            cout<<"yes\n";
        }
        else {
        cout<<"no\n";
        }
    }
    return 0;
}